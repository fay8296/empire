package com.template;
import java.io.DataInputStream;
public class Goods implements TemplateInterface
{
	public String good_id;
	public String name;
	public short color;
	public short type;
	public int level;
	public String des;
	public String icon_id;
	public short can_use;
	public String use_effect;
	public void read(DataInputStream in)throws Exception
	{
		good_id=in.readUTF();
		name=in.readUTF();
		color=in.readShort();
		type=in.readShort();
		level=in.readInt();
		des=in.readUTF();
		icon_id=in.readUTF();
		can_use=in.readShort();
		use_effect=in.readUTF();
	}
}
