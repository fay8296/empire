package com.template;
import java.io.DataInputStream;
public class Rule implements TemplateInterface
{
	public int level;
	public int role_level;
	public String[] consume_goods;
	public float probability;
	public int num;
	public void read(DataInputStream in)throws Exception
	{
		level=in.readInt();
		role_level=in.readInt();
		short consume_goods_count=in.readShort();
		if(consume_goods_count>0)
		{
			consume_goods=new String[consume_goods_count];
			for(int i=0;i<consume_goods_count;i++)
			{
				consume_goods[i]=in.readUTF();
			}
		}

		probability=in.readFloat();
		num=in.readInt();
	}
}
