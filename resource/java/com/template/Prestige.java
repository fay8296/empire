package com.template;
import java.io.DataInputStream;
public class Prestige implements TemplateInterface
{
	public int level;
	public long need_prestige;
	public void read(DataInputStream in)throws Exception
	{
		level=in.readInt();
		need_prestige=in.readLong();
	}
}
