package org.net;
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
		org.net.obj.SbLoginRequest.LoginRequest req=(org.net.obj.SbLoginRequest.LoginRequest)msgObj;
		System.out.println(req.getDeviceId()+"--"+req.getDeviceType());
	}
}

