package com;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import org.apache.poi.ss.usermodel.Cell;
import org.apache.poi.ss.usermodel.Row;
import org.apache.poi.ss.usermodel.Sheet;
import org.apache.poi.ss.usermodel.Workbook;
import org.apache.poi.ss.usermodel.WorkbookFactory;
import org.net.MsgType;


public class MainParse {


	public String path="/work/mypro/zhanjian/empire/protocol/通信表.xlsx";
	public String protoPath="/work/mypro/zhanjian/empire/protocol/protocol";
	public String outPath="/work/mypro/zhanjian/empire/protocol";
	public String packName="org.net.obj";

	public List<String> ids;
	public List<String> fileNames;
	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		MainParse m=new MainParse();
		m.parse();
		m.convert();
		m.outPutFactory();

		//		byte b[]=new byte[4];
		//		b[0]=1;
		//		b[1]=0;
		//		b[2]=0;
		//		b[3]=0;
		//		byteArrayToInt(b,0);
	}

	public MainParse()
	{
		ids=new ArrayList();
		fileNames=new ArrayList();

	}
	public void parse()
	{
		File file=new File(path);
		try{

			InputStream inp = new FileInputStream(file);
			Workbook wb = WorkbookFactory.create(inp);
			for(int i=0;i<wb.getNumberOfSheets();i++)
			{
				Sheet sheet = wb.getSheetAt(i);
				for(int j=1;j<=sheet.getLastRowNum();j++)
				{
					Row row=sheet.getRow(j);
					if(row==null)
					{
						continue;
					}
					Cell cell0=row.getCell(0);
					Cell cell1=row.getCell(1);
					Cell cell2=row.getCell(2);
					if(cell1==null)
					{
						continue;
					}
					String i_d=cell1.toString();
					String filename=cell2.toString();
					ids.add(i_d);
					this.fileNames.add(filename);

				}

				break;
			}

		}
		catch(Exception e)
		{
			e.printStackTrace();
		}

	}


	public void convert()
	{
		try{
			String java_cmd="/usr/local/bin/protoc -I="+protoPath+" --java_out="+this.outPath+"/java";
			String cpp_cmd="/usr/local/bin/protoc -I="+protoPath+" --cpp_out="+this.outPath+"/cpp";
			File java_path=new File(outPath+"/java");
			File cpp_path=new File(outPath+"/cpp");
			if(!java_path.exists())
			{
				java_path.mkdir();
			}

			if(!cpp_path.exists())
			{
				cpp_path.mkdir();
			}

			for(String fileName:this.fileNames)
			{

				String filePath=protoPath+"/"+fileName;

				File f=new File(filePath);
				if(!f.exists())
				{
					throw new Exception(filePath+" not exist!");
				}
				String cmd1=java_cmd+" "+filePath;
				String cmd2=cpp_cmd+" "+filePath;

				System.out.println(cmd1);
				System.out.println(cmd2);

				Runtime rt = Runtime.getRuntime();
				Process proc = rt.exec(cmd1);
				Process proc2 = rt.exec(cmd2);
				BufferedReader err_in=new BufferedReader(new InputStreamReader(proc.getErrorStream()));
				String err_a=null;
				while((err_a=err_in.readLine())!=null)
				{
					System.out.println(err_a);
				}

				BufferedReader in=new BufferedReader(new InputStreamReader(proc.getInputStream()));
				String a=null;
				while((a=in.readLine())!=null)
				{
					System.out.println(a);
				}
				int exitVal=proc.waitFor();
				//				System.out.println("Process exitValue: " + exitVal);
				//			
				//				
				//				
			}


		}
		catch(Exception e)
		{
			e.printStackTrace();
		}


	}


	public void outPutFactory()
	{
		try{
			//输出消息类型
			String java_path=outPath+"/java/org/net/MsgType.java";
			PrintWriter java_msg_type=new PrintWriter(java_path);
			java_msg_type.println("package org.net;");
			java_msg_type.println("public class MsgType");
			java_msg_type.println("{");
			int size=this.fileNames.size();
			for(int i=0;i<size;i++)
			{
				String name=this.fileNames.get(i);
				String[] a=name.split("\\.");
				String typeName=a[1].toUpperCase()+"_TYPE";
				String type_id=this.ids.get(i);
				int n=(int)Double.parseDouble(type_id);
				java_msg_type.println("	public static int "+typeName+" = "+n+";");

			}

			java_msg_type.println("}");
			java_msg_type.close();


			String cpp_path=outPath+"/cpp/MsgType.h";
			PrintWriter cpp_msg_type=new PrintWriter(cpp_path);
			cpp_msg_type.println("#ifndef XF_MsgType_h");
			cpp_msg_type.println("#define XF_MsgType_h");
			size=this.fileNames.size();
			for(int i=0;i<size;i++)
			{
				String name=this.fileNames.get(i);
				String[] a=name.split("\\.");
				String typeName=a[1].toUpperCase()+"_TYPE";
				String type_id=this.ids.get(i);
				int n=(int)Double.parseDouble(type_id);
				cpp_msg_type.println("#define "+typeName+" "+n);

			}
			cpp_msg_type.println("#endif");
			cpp_msg_type.close();


			String java_factory_path=outPath+"/java/org/net/MessageFactory.java";
			PrintWriter java_MessageFactory=new PrintWriter(java_factory_path);
			java_MessageFactory.println("package org.net;");

			for(String name :this.fileNames)
			{
				String[] a=name.split("\\.");
				String firstC=a[0].substring(0,1);
				String leftC=a[0].substring(1);
				String classFileName=firstC.toUpperCase()+leftC+a[1];
				String className=a[1];
				java_MessageFactory.println("import "+packName+"."+classFileName+"."+className+";");

			}
			java_MessageFactory.println("import java.util.Arrays;");
			java_MessageFactory.println("public class MessageFactory");
			java_MessageFactory.println("{");
			java_MessageFactory.println("	public static MessageFactory factory=null;");

			String p_MessageFactory="private MessageFactory()\n"+
					"{\n"+
					"}\n";
			java_MessageFactory.println(p_MessageFactory);
			String shareMessageFactory="public static MessageFactory shareMessageFactory()\n"+
					"{\n"+
					"	if(factory==null)\n"+
					"	{\n"+
					"		factory=new MessageFactory();\n"+
					"	}\n"+
					"	return factory;\n"+
					"}\n";
			java_MessageFactory.println(shareMessageFactory);


			String byteArrayToInt="public int byteArrayToInt(byte[] b,int offset)\n"+
					"{\n"+
					"int value=0;\n"+
					"for(int i=0;i<4;i++)\n"+
					"{\n"+
					"int shift=(4-1-i)*8;\n"+
					"value+=(b[i+offset]&0x000000FF)<<shift;\n"+
					"}\n"+
					"return value;\n"+
					"}\n";
			java_MessageFactory.println(byteArrayToInt);

			String parseMsg="public void parseMsg(byte[] buf)throws Exception\n"+
					"{\n"+
					"byte[] len_byte=new byte[4];\n"+
					"len_byte[0]=buf[0];\n"+
					"len_byte[1]=buf[1];\n"+
					"len_byte[2]=buf[2];\n"+
					"len_byte[3]=buf[3];\n"+
					"int len=byteArrayToInt(len_byte,0);//总长度\n"+
					"byte[] msg_type_byte=new byte[4];\n"+
					"msg_type_byte[0]=buf[4];\n"+
					"msg_type_byte[1]=buf[5];\n"+
					"msg_type_byte[2]=buf[6];\n"+
					"msg_type_byte[3]=buf[7];\n"+
					"int msg_type=byteArrayToInt(msg_type_byte,0);//消息类型\n"+
					"com.google.protobuf.GeneratedMessage message=null;\n"+
					"byte[] bodyBuf=Arrays.copyOfRange(buf,8,len);\n"+
					"int body_len=len-8;\n";

			int count=0;
			for(String name :this.fileNames)
			{
				String[] a=name.split("\\.");
				String firstC=a[0].substring(0,1);
				String leftC=a[0].substring(1);
				String classFileName=firstC.toUpperCase()+leftC+a[1];
				String className=this.packName+"."+classFileName+"."+a[1];
				String type_name=a[1].toUpperCase()+"_TYPE";
				if(count==0)
				{
					parseMsg+="if(msg_type==MsgType."+type_name+")\n";
					parseMsg+="{\n";
					parseMsg+="	message="+className+".parseFrom(bodyBuf);\n";
					parseMsg+="}\n";	
				}
			}


			parseMsg+="Service.shareService().dispatchMsg(msg_type, message);\n";

			parseMsg+="}\n";

			java_MessageFactory.println(parseMsg);
			java_MessageFactory.println("}");
			java_MessageFactory.close();



			String java_service_path=outPath+"/java/org/net/Service.java";
			PrintWriter java_service_out=new PrintWriter(java_service_path);
			String Service_str="package org.net;\n"+
					"public class Service {\n"+
					"	public static Service server=null;\n"+
					"	private Service()\n"+
					"	{\n"+	
					"	}\n"+
					"	public static Service shareService()\n"+
					"	{\n"+
					"		if(server==null)"+
					"		{\n"+
					"			server=new Service();\n"+
					"		}\n"+
					"		return server;\n"+
					"	}\n"+	
					"	public void dispatchMsg(int msgType,com.google.protobuf.GeneratedMessage msgObj)\n"+
					"	{\n"+
					"	}\n"+	
					"}\n";

			java_service_out.println(Service_str);
			java_service_out.close();


			String cpp_factory_path_h=outPath+"/cpp/MessageFactory.h";
			PrintWriter cpp_factory_path_h_out=new PrintWriter(cpp_factory_path_h);
			String cpp_factory_h_str="#pragma once\n"+
					"#ifndef XF_MessageFactory_h\n"+
					"#define XF_MessageFactory_h\n"+
					"#include \"ByteBuffer.h\"\n"+
					"#include \"MsgType.h\"\n"+
					"#include \"Service.h\"\n"+
					"class MessageFactory\n"+
					"{\n"+
					"public:\n"+
					"	void parseMsg(ByteBuffer* buf);\n"+
					"	static MessageFactory* shareMessageFactory();\n"+
					"};\n"+
					"#endif";
			cpp_factory_path_h_out.println(cpp_factory_h_str);
			cpp_factory_path_h_out.close();
			
			String cpp_factory_path_cpp=outPath+"/cpp/MessageFactory.cpp";
			PrintWriter cpp_factory_path_cpp_out=new PrintWriter(cpp_factory_path_cpp);
			cpp_factory_path_cpp_out.println("#include \"MessageFactory.h\"");
			for(String name :this.fileNames)
			{
				String[] a=name.split("\\.");
				String h_name=a[0]+"."+a[1]+".pb.h";
				cpp_factory_path_cpp_out.println("#include \""+h_name+"\"");
			}
			cpp_factory_path_cpp_out.println("using namespace org::net::obj;");
			String tmp1="static MessageFactory* factory=NULL;\n"+
			"MessageFactory* MessageFactory::shareMessageFactory()\n"+
			"{\n"+
			" 	if(factory==NULL){\n"+
			" 		factory=new MessageFactory();\n"+
			" 	}\n"+
			"	return factory;\n"+
			"}\n";
			cpp_factory_path_cpp_out.println(tmp1);
			
			cpp_factory_path_cpp_out.println("void MessageFactory::parseMsg(ByteBuffer* buf)");
			cpp_factory_path_cpp_out.println("{");
			String tmp2="	int len=buf->readInt();\n"+
						"	int msg_type=buf->readInt();";
						
			cpp_factory_path_cpp_out.println(tmp2);
			cpp_factory_path_cpp_out.println("	int body_len=len-8;");
			cpp_factory_path_cpp_out.println("	::google::protobuf::Message *msg_obj=NULL;");
			cpp_factory_path_cpp_out.println("	switch (msg_type)");
			cpp_factory_path_cpp_out.println("	{");
			for(String name :this.fileNames)
			{
				String[] a=name.split("\\.");
				String type_name=a[1].toUpperCase()+"_TYPE";
				cpp_factory_path_cpp_out.println("		case "+type_name+":");
				cpp_factory_path_cpp_out.println("		{");
				cpp_factory_path_cpp_out.println("			msg_obj=LoginRequest::default_instance().New();");
				cpp_factory_path_cpp_out.println("			msg_obj->ParseFromArray(buf->buffer, body_len);");
				cpp_factory_path_cpp_out.println("			break;");
				cpp_factory_path_cpp_out.println("		}");
			}
			cpp_factory_path_cpp_out.println("		default:break;");
			cpp_factory_path_cpp_out.println("	}");
			cpp_factory_path_cpp_out.println("	Service::shareService()->disPatchMsg(msg_type, msg_obj);");
			cpp_factory_path_cpp_out.println("}");
			cpp_factory_path_cpp_out.close();
			
		}catch(Exception e)
		{
			e.printStackTrace();
		}
	}


//
//	public  int byteArrayToInt(byte[] b,int offset)
//	{
//		int value=0;
//		for(int i=0;i<4;i++)
//		{
//			int shift=(4-1-i)*8;
//			value+=(b[i+offset]&0x000000FF)<<shift;
//		}
//		System.out.println(""+value);
//		return value;
//	}

}
