package com.template;
import java.io.DataInputStream;
public class Keji implements TemplateInterface
{
	public String id;
	public String name;
	public int level;
	public String des;
	public String icon;
	public int shengwang_level;
	public int keji_level;
	public String[] goods;
	public int time;
	public String[] effect;
	public void read(DataInputStream in)throws Exception
	{
		id=in.readUTF();
		name=in.readUTF();
		level=in.readInt();
		des=in.readUTF();
		icon=in.readUTF();
		shengwang_level=in.readInt();
		keji_level=in.readInt();
		short goods_count=in.readShort();
		if(goods_count>0)
		{
			goods=new String[goods_count];
			for(int i=0;i<goods_count;i++)
			{
				goods[i]=in.readUTF();
			}
		}

		time=in.readInt();
		short effect_count=in.readShort();
		if(effect_count>0)
		{
			effect=new String[effect_count];
			for(int i=0;i<effect_count;i++)
			{
				effect[i]=in.readUTF();
			}
		}

	}
}
