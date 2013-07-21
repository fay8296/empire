package com.template;
import java.io.DataInputStream;
public class BuildCondition implements TemplateInterface
{
	public String c_id;
	public String build_name;
	public short build_type;
	public short build_num;
	public short condition_level;
	public void read(DataInputStream in)throws Exception
	{
		c_id=in.readUTF();
		build_name=in.readUTF();
		build_type=in.readShort();
		build_num=in.readShort();
		condition_level=in.readShort();
	}
}
