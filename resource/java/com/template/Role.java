package com.template;
import java.io.DataInputStream;
public class Role implements TemplateInterface
{
	public int level;
	public long exp;
	public int physical;
	public float physical_recover_time;
	public String[] consume;
	public short num;
	public void read(DataInputStream in)throws Exception
	{
		level=in.readInt();
		exp=in.readLong();
		physical=in.readInt();
		physical_recover_time=in.readFloat();
		short consume_count=in.readShort();
		if(consume_count>0)
		{
			consume=new String[consume_count];
			for(int i=0;i<consume_count;i++)
			{
				consume[i]=in.readUTF();
			}
		}

		num=in.readShort();
	}
}
