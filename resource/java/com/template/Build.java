package com.template;
import java.io.DataInputStream;
public class Build implements TemplateInterface
{
	public String build_id;
	public String build_name;
	public short level;
	public String des;
	public short type;
	public String produce_type;
	public int produce_num;
	public long build_time;
	public String[] consume_goods;
	public String[] upgrade_add;
	public String imag_id;
	public String icon_id;
	public String effect_id;
	public void read(DataInputStream in)throws Exception
	{
		build_id=in.readUTF();
		build_name=in.readUTF();
		level=in.readShort();
		des=in.readUTF();
		type=in.readShort();
		produce_type=in.readUTF();
		produce_num=in.readInt();
		build_time=in.readLong();
		short consume_goods_count=in.readShort();
		if(consume_goods_count>0)
		{
			consume_goods=new String[consume_goods_count];
			for(int i=0;i<consume_goods_count;i++)
			{
				consume_goods[i]=in.readUTF();
			}
		}

		short upgrade_add_count=in.readShort();
		if(upgrade_add_count>0)
		{
			upgrade_add=new String[upgrade_add_count];
			for(int i=0;i<upgrade_add_count;i++)
			{
				upgrade_add[i]=in.readUTF();
			}
		}

		imag_id=in.readUTF();
		icon_id=in.readUTF();
		effect_id=in.readUTF();
	}
}
