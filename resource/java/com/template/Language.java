package com.template;
import java.io.DataInputStream;
public class Language implements TemplateInterface
{
	public String ID;
	public String CH;
	public String EN;
	public String TW;
	public void read(DataInputStream in)throws Exception
	{
		ID=in.readUTF();
		CH=in.readUTF();
		EN=in.readUTF();
		TW=in.readUTF();
	}
}
