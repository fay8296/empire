package com.template;
import java.io.DataInputStream;
public class Boat implements TemplateInterface
{
	public String boat_id;
	public String name;
	public String des;
	public short color;
	public String build_id;
	public String[] consume_goods;
	public long build_time;
	public short pos;
	public long weight;
	public short attack_type;
	public float attack_init;
	public float life_init;
	public float hit_init;
	public float duck_init;
	public float boom_init;
	public float toughness_init;
	public float qte_init;
	public String[] skill_id;
	public String[] passive_skill_id;
	public String attack_effect;
	public String hit_attack;
	public int attack_time;
	public int hit_time;
	public String shap_id;
	public String icon_id;
	public String attack_id;
	public float scale;
	public String effect;
	public void read(DataInputStream in)throws Exception
	{
		boat_id=in.readUTF();
		name=in.readUTF();
		des=in.readUTF();
		color=in.readShort();
		build_id=in.readUTF();
		short consume_goods_count=in.readShort();
		if(consume_goods_count>0)
		{
			consume_goods=new String[consume_goods_count];
			for(int i=0;i<consume_goods_count;i++)
			{
				consume_goods[i]=in.readUTF();
			}
		}

		build_time=in.readLong();
		pos=in.readShort();
		weight=in.readLong();
		attack_type=in.readShort();
		attack_init=in.readFloat();
		life_init=in.readFloat();
		hit_init=in.readFloat();
		duck_init=in.readFloat();
		boom_init=in.readFloat();
		toughness_init=in.readFloat();
		qte_init=in.readFloat();
		short skill_id_count=in.readShort();
		if(skill_id_count>0)
		{
			skill_id=new String[skill_id_count];
			for(int i=0;i<skill_id_count;i++)
			{
				skill_id[i]=in.readUTF();
			}
		}

		short passive_skill_id_count=in.readShort();
		if(passive_skill_id_count>0)
		{
			passive_skill_id=new String[passive_skill_id_count];
			for(int i=0;i<passive_skill_id_count;i++)
			{
				passive_skill_id[i]=in.readUTF();
			}
		}

		attack_effect=in.readUTF();
		hit_attack=in.readUTF();
		attack_time=in.readInt();
		hit_time=in.readInt();
		shap_id=in.readUTF();
		icon_id=in.readUTF();
		attack_id=in.readUTF();
		scale=in.readFloat();
		effect=in.readUTF();
	}
}
