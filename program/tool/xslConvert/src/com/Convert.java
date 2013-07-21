package com;

import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

import org.apache.poi.ss.usermodel.Cell;
import org.apache.poi.ss.usermodel.Row;
import org.apache.poi.ss.usermodel.Sheet;
import org.apache.poi.ss.usermodel.Workbook;
import org.apache.poi.ss.usermodel.WorkbookFactory;



public class Convert  
{


	public static String xslDirectory="/Users/APPLE/Downloads/主角/";
	public static String outPutDirectory="/Users/APPLE/Downloads/主角/";
	public List<String> firstLine;
	public List<String> secondLine;
	public List<String> thirdLine;
	public List<List<String>> dataLine;
	public String className;
	public int line_num;
	public int col_num;
	public List<String> classNames;
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		if(args.length>0)
		{
			xslDirectory=args[0];
		}
		else if(args.length>1)
		{
			outPutDirectory=args[1];
		}

		Convert c=new Convert();
		c.parse();
	}

	public Convert()
	{
		classNames=new ArrayList();
	}
	public void reset()
	{
		firstLine=new ArrayList();
		secondLine=new ArrayList();
		dataLine=new ArrayList();
		thirdLine=new ArrayList();
		className="";
		line_num=0;
		col_num=0;
	}
	public void parse()
	{
		File inputDirectory=new File(xslDirectory);
		File[] files=inputDirectory.listFiles();
		for(File f:files)
		{
			String name=f.getName();
			if(!name.endsWith("xlsx"))
			{
				continue;
			}
			if(name.startsWith("~"))
			{
				continue;
			}
			System.out.println("parse file:"+f.getName());
			this.createXlsxInfo(f);
			this.outputClass();
			this.outputBinFile();
		}
		this.outputClassNameToFile();

	}


	public void createXlsxInfo(File file)
	{

		this.reset();
		try{
			InputStream inp = new FileInputStream(file);
			Workbook wb = WorkbookFactory.create(inp);
			for(int i=0;i<wb.getNumberOfSheets();i++)
			{
				Sheet sheet = wb.getSheetAt(i);
				className=sheet.getSheetName();
				classNames.add(className);
				for(int j=0;j<=sheet.getLastRowNum();j++)
				{

					Row row=sheet.getRow(j);	
					Cell cell0=row.getCell(0);
					if(cell0==null||cell0.toString().trim().length()<=0)
					{
						continue;
					}
					line_num++;
					if(j==0)//根据第一行算出列数目
					{
						col_num=0;

						for(int k=0;k<100;k++)
						{
							Cell cell=row.getCell(k);
							if(cell==null)
							{
								break;

							}
							col_num++;
						}
					}
					List data=new ArrayList();
					for(int k=0;k<col_num;k++)
					{
						String value="";
						Cell cell=row.getCell(k);
						if(cell==null)
						{
							value="";
						}
						else{
							value=cell.toString();
						}


						if(j==0)//第一行 中文描述
						{
							this.firstLine.add(value);

						}
						else if(j==1)//第2行 英文描述
						{
							this.secondLine.add(value);
						}
						else if(j==2)//第3行 类型
						{
							this.thirdLine.add(value);
						}
						else 
						{
							data.add(value);
						}

					}
					this.dataLine.add(data);
				}


				break;
			}


		}catch(Exception e)
		{
			e.printStackTrace();
		}


	}


	public void outputClass()//输出类文件
	{
		if(className.trim().length()<=0)
		{
			return;
		}
		String java_path=outPutDirectory+"java/com/template/";
		String cpp_path=outPutDirectory+"cpp/com/template/";
		File java_directory=new File(java_path);
		if(!java_directory.exists())
		{
			java_directory.mkdirs();
		}
		File cpp_directory=new File(cpp_path);
		if(!cpp_directory.exists())
		{
			cpp_directory.mkdirs();
		}
		System.out.println(java_path+className+".java");
		File java_file=new File(java_path+className+".java");
		File cpp_file_h=new File(cpp_path+className+".h");
		File cpp_file_cpp=new File(cpp_path+className+".cpp");
		java_file.delete();
		cpp_file_h.delete();
		cpp_file_cpp.delete();

		try{
			//输出java类
			PrintWriter java_interface=new PrintWriter(java_path+"TemplateInterface.java");
			java_interface.println("package com.template;");
			java_interface.println("import java.io.DataInputStream;");
			java_interface.println("public interface TemplateInterface");
			java_interface.println("{");
			java_interface.println("	public void read(DataInputStream in)throws Exception;");
			java_interface.println("}");
			java_interface.close();

			PrintWriter java_out=new PrintWriter(java_file);
			java_out.println("package com.template;");
			java_out.println("import java.io.DataInputStream;");
			java_out.println("public class "+className+" implements TemplateInterface");
			java_out.println("{");
			int count=this.secondLine.size();
			for(int i=0;i<count;i++)
			{
				String name=this.secondLine.get(i);
				String type=this.thirdLine.get(i);
				java_out.println("	public "+type+" "+name+";");
			}


			java_out.println("	public void read(DataInputStream in)throws Exception");
			java_out.println("	{");
			for(int i=0;i<count;i++)
			{
				String name=this.secondLine.get(i);
				String type=this.thirdLine.get(i);
				String a=getJavaReadString(name,type);
				java_out.println(a);
			}
			java_out.println("	}");
			java_out.println("}");

			java_out.close();


			//输出cpp
			PrintWriter cpp_interface_h=new PrintWriter(cpp_path+"TemplateInterface.h");
			cpp_interface_h.println("#ifndef XF_TemplateInterface_h");
			cpp_interface_h.println("#define XF_TemplateInterface_h");
			cpp_interface_h.println("#include \"ByteBuffer.h\"");
			cpp_interface_h.println("class TemplateInterface");
			cpp_interface_h.println("{");
			cpp_interface_h.println("public:");
			cpp_interface_h.println("	virtual void read(ByteBuffer* buffer);");
			cpp_interface_h.println("};");
			cpp_interface_h.println("#endif");
			cpp_interface_h.close();

			PrintWriter cpp_interface_class=new PrintWriter(cpp_path+"TemplateInterface.cpp");
			cpp_interface_class.println("#include \"TemplateInterface.h\"");
			cpp_interface_class.println("void TemplateInterface::read(ByteBuffer* buffer){}");
			cpp_interface_class.close();



			PrintWriter cpp_data_h=new PrintWriter(cpp_path+className+".h");
			cpp_data_h.println("#ifndef XF_"+className+"_h");
			cpp_data_h.println("#define XF_"+className+"_h");
			cpp_data_h.println("#include \"TemplateInterface.h\"");
			cpp_data_h.println("#include <string>");
			cpp_data_h.println("#include <vector>");
			cpp_data_h.println("class "+className+":public TemplateInterface");
			cpp_data_h.println("{");
			cpp_data_h.println("public:");
			for(int i=0;i<count;i++)
			{
				String name=this.secondLine.get(i);
				String type=this.thirdLine.get(i);
				String type2=this.getCPPType(type);
				cpp_data_h.println("	"+type2+" "+name+";");
			}
			cpp_data_h.println("	virtual void read(ByteBuffer* buffer);");
			cpp_data_h.println("};");
			cpp_data_h.println("#endif");
			cpp_data_h.close();


			PrintWriter cpp_data_cpp=new PrintWriter(cpp_path+className+".cpp");
			cpp_data_cpp.println("#include \""+className+".h\"");
			cpp_data_cpp.println("void "+className+"::read(ByteBuffer* buffer)");
			cpp_data_cpp.println("{");
			for(int i=0;i<count;i++)
			{
				String name=this.secondLine.get(i);
				String type=this.thirdLine.get(i);
				String a=getCppReadString(name,type);
				cpp_data_cpp.println(a);
			}
			cpp_data_cpp.println("}");
			cpp_data_cpp.close();
		}catch(Exception e)
		{
			e.printStackTrace();
		}
	}

	public String getCPPType(String type)
	{

		if(type.equals("String[]"))
		{
			return "std::vector<std::string>";
		}
		else if(type.equals("String")){
			return "std::string";
		}
		return type;
	}

	public String getJavaReadString(String name,String type)
	{
		//DataInputStream in;
		//System.out.println(type);
		String result="		";
		if(type.equals("String"))
		{
			result+=name+"=in.readUTF();";
		}
		else if(type.equals("int"))
		{
			result+=name+"=in.readInt();";
		}
		else if(type.equals("long"))
		{
			result+=name+"=in.readLong();";
		}
		else if(type.equals("float"))
		{
			result+=name+"=in.readFloat();";
		}
		else if(type.equals("String[]"))
		{
			String a=name+"_count";
			result+="short "+a+"=in.readShort();\n";
			result+="		if("+a+">0)\n";
			result+="		{\n";
			result+="			"+name+"=new String["+a+"];\n";
			result+="			for(int i=0;i<"+a+";i++)\n";
			result+="			{\n";
			result+="				"+name+"[i]=in.readUTF();\n";
			result+="			}\n";
			result+="		}\n";

		}

		return result;
	}


	public String getCppReadString(String name,String type)
	{

		//System.out.println(type);
		String result="		";
		if(type.equals("String"))
		{
			result+="this->"+name+"=buffer->readUTF();";
		}
		else if(type.equals("int"))
		{
			result+="this->"+name+"=buffer->readInt();";
		}
		else if(type.equals("long"))
		{
			result+="this->"+name+"=buffer->readLong();";
		}
		else if(type.equals("float"))
		{
			result+="this->"+name+"=buffer->readFloat();";
		}
		else if(type.equals("String[]"))
		{
			String a=name+"_count";
			result+="short "+a+"=buffer->readShort();\n";
			result+="		if("+a+">0)\n";
			result+="		{\n";
			result+="			for(int i=0;i<"+a+";i++)\n";
			result+="			{\n";
			result+="				std::string tmp=buffer->readUTF();\n";
			result+="				this->"+name+".push_back(tmp);\n";
			result+="			}\n";
			result+="		}\n";

		}

		return result;
	}
	public void outputBinFile()//输出二进制文件
	{
		if(className.trim().length()<=0)
		{
			return;
		}
		int count=this.dataLine.size();
		String bin_path=outPutDirectory+"bin/";
		File bin_directory=new File(bin_path);
		if(!bin_directory.exists())
		{
			bin_directory.mkdirs();
		}

		System.out.println(bin_path+className+".bin");
		File bin_file=new File(bin_path+className+".bin");
		bin_file.delete();
		try{
			DataOutputStream out=new DataOutputStream(new FileOutputStream(bin_file));
			//System.out.println("line_num:"+line_num);
			out.writeShort((short)this.line_num);
			for(int i=0;i<count;i++)
			{
				List<String> list=this.dataLine.get(i);
				int col_count=list.size();
				for(int j=0;j<col_count;j++)
				{
					String value=list.get(j);
					String type=this.thirdLine.get(j);
					this.outputBinMethod(out,value,type);
				}

			}
			out.close();

		}catch(Exception e)
		{
			e.printStackTrace();
		}



	}

	public void outputBinMethod(DataOutputStream out,String value,String type)
	{

		//System.out.println(value);
		try{
			if(type.equals("String"))
			{
				out.writeUTF(value);
			}
			else if(type.equals("int"))
			{
				if(value.indexOf(".")!=-1)
				{
					value=value.substring(0,value.indexOf("."));
				}

				int n=0;
				if(value!=null&&value.trim().length()>0)
				{
					n=(int)Double.parseDouble(value.trim());
					out.writeInt(n);
				}
				else{
					out.writeInt(n);
				}

			}
			else if(type.equals("long"))
			{
				long n=0;


				if(value!=null&&value.trim().length()>0)
				{
					n=(long)Double.parseDouble(value.trim());
					out.writeLong(n);
				}
				else{
					out.writeLong(n);
				}

			}
			else if(type.equals("float"))
			{
				float n=0;
				if(value!=null&&value.trim().length()>0)
				{
					n=Float.parseFloat(value.trim());
					out.writeFloat(n);
				}
				else{
					out.writeFloat(n);
				}

			}
			else if(type.equals("String[]"))
			{
				String[] a=value.split(";");
				short n=(short) a.length;
				//System.out.println(a.length+"-"+n);
				if(n==1&&a[0].trim().length()<=0)
				{
					n=0;
					out.writeShort(n);
				}
				else{
					out.writeShort(n);
					for(int i=0;i<n;i++)
					{
						String tmp=a[i];
						out.writeUTF(tmp);
					}
				}

			}
		}catch(Exception e)
		{
			e.printStackTrace();
		}

	}

	public void outputClassNameToFile()
	{
		try{
			PrintWriter txtFile=new PrintWriter(outPutDirectory+"templates.txt");
			for(String name : this.classNames)
			{
				txtFile.println(name+";");
			}
			txtFile.close();
			
			PrintWriter java_factory=new PrintWriter(outPutDirectory+"java/com/template/TemplateFactory.java");
			java_factory.println("package com.template;");
			java_factory.println("import com.template.*;");
			java_factory.println("public class TemplateFactory");
			java_factory.println("{");
			java_factory.println("public static TemplateFactory templateFactory=null;");
			java_factory.println("	private TemplateFactory(){}");
			java_factory.println("	public static TemplateFactory shareTemplateFactory()");
			java_factory.println("	{");
			java_factory.println("		if(templateFactory==null){templateFactory=new TemplateFactory();} return templateFactory;");
			java_factory.println("	}");
			java_factory.println("	public  TemplateInterface createTemplateObj(String templateName)");
			java_factory.println("	{");
			int count=0;
			for(String name : this.classNames)
			{
				
				if(count==0)
				{
					java_factory.println("		if(templateName.equals(\""+name+"\"))");
					java_factory.println("		{");
					java_factory.println("			return new "+name+"();");
					java_factory.println("		}");
				}
				else{
					java_factory.println("		else if(templateName.equals(\""+name+"\"))");
					java_factory.println("		{");
					java_factory.println("			return new "+name+"();");
					java_factory.println("		}");
				}
				count++;
			}
			java_factory.println("		else{return null;}");
			java_factory.println("	}");
			java_factory.println("}");
			java_factory.close();
			
			PrintWriter cpp_factory_h=new PrintWriter(outPutDirectory+"cpp/com/template/TemplateFactory.h");
			cpp_factory_h.println("#ifndef XF_TemplateFactory_h");
			cpp_factory_h.println("#define XF_TemplateFactory_h");
			cpp_factory_h.println("#include \"TemplateInterface.h\"");
			cpp_factory_h.println("#include <string>");
			cpp_factory_h.println("class TemplateFactory");
			cpp_factory_h.println("{");
			cpp_factory_h.println("public:");
			cpp_factory_h.println("	static TemplateFactory* shareTemplateFactory();");
			cpp_factory_h.println("	TemplateInterface* createTemplateObj(std::string templateName);");
			cpp_factory_h.println("};");
			cpp_factory_h.println("#endif");
			cpp_factory_h.close();
			
			PrintWriter cpp_factory_cpp=new PrintWriter(outPutDirectory+"cpp/com/template/TemplateFactory.cpp");
			cpp_factory_cpp.println("#include \"TemplateFactory.h\"");
			count=0;
			for(String name : this.classNames)
			{
				cpp_factory_cpp.println("#include \""+name+".h\"");
			}
			cpp_factory_cpp.println("static TemplateFactory* factory=NULL;");
			cpp_factory_cpp.println("TemplateFactory* TemplateFactory::shareTemplateFactory()");
			cpp_factory_cpp.println("{");
			cpp_factory_cpp.println("	if(factory==NULL){factory=new TemplateFactory();} return factory;");
			cpp_factory_cpp.println("}");
			cpp_factory_cpp.println("TemplateInterface* TemplateFactory::createTemplateObj(std::string templateName)");
			cpp_factory_cpp.println("{");
			for(String name : this.classNames)
			{
				
				if(count==0)
				{
					cpp_factory_cpp.println("		if(templateName.compare(\""+name+"\")==0)");
					cpp_factory_cpp.println("		{");
					cpp_factory_cpp.println("			return new "+name+"();");
					cpp_factory_cpp.println("		}");
				}
				else{
					cpp_factory_cpp.println("		else if(templateName.compare(\""+name+"\")==0)");
					cpp_factory_cpp.println("		{");
					cpp_factory_cpp.println("			return new "+name+"();");
					cpp_factory_cpp.println("		}");
				}
				count++;
			}
			cpp_factory_cpp.println("		else{return NULL;}");
			cpp_factory_cpp.println("}");
			cpp_factory_cpp.close();
			
		}catch(Exception e)
		{
			e.printStackTrace();
		}
	}
}
