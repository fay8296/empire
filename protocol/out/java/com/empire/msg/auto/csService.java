package com.empire.msg.auto.cs;
public class Service {
	public static Service server=null;
	private Service()
	{
	}
	public static Service shareService()
	{
		if(server==null)		{
			server=new Service();
		}
		return server;
	}
	public void dispatchMsg(int msgType,com.google.protobuf.GeneratedMessage msgObj)
	{
	}
}

