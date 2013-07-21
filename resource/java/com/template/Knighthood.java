package com.template;
import java.io.DataInputStream;
public class Knighthood implements TemplateInterface
{
	public int level;
	public String name;
	public String icon_id;
	public int role_level;
	public String[] consume_goods;
	public String[] get_goods;
	public void read(DataInputStream in)throws Exception
	{
		level=in.readInt();
		name=in.readUTF();
		icon_id=in.readUTF();
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

		short get_goods_count=in.readShort();
		if(get_goods_count>0)
		{
			get_goods=new String[get_goods_count];
			for(int i=0;i<get_goods_count;i++)
			{
				get_goods[i]=in.readUTF();
			}
		}

	}
}
