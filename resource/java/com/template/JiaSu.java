package com.template;
import java.io.DataInputStream;
public class JiaSu implements TemplateInterface
{
	public String type;
	public String time;
	public String[] goods;
	public void read(DataInputStream in)throws Exception
	{
		type=in.readUTF();
		time=in.readUTF();
		short goods_count=in.readShort();
		if(goods_count>0)
		{
			goods=new String[goods_count];
			for(int i=0;i<goods_count;i++)
			{
				goods[i]=in.readUTF();
			}
		}

	}
}
