package com.empire.msg.auto.cs;
import com.empire.msg.auto.cs.CSCSPasswdLoginMsg.CSPasswdLoginMsg;
import com.empire.msg.auto.cs.SCSCPlayerInfoMsg.SCPlayerInfoMsg;
import java.util.Arrays;
public class MessageFactory
{
	public static MessageFactory factory=null;
private MessageFactory()
{
}

public static MessageFactory shareMessageFactory()
{
	if(factory==null)
	{
		factory=new MessageFactory();
	}
	return factory;
}

public int byteArrayToInt(byte[] b,int offset)
{
int value=0;
for(int i=0;i<4;i++)
{
int shift=(4-1-i)*8;
value+=(b[i+offset]&0x000000FF)<<shift;
}
return value;
}

public void parseMsg(byte[] buf)throws Exception
{
byte[] len_byte=new byte[4];
len_byte[0]=buf[0];
len_byte[1]=buf[1];
len_byte[2]=buf[2];
len_byte[3]=buf[3];
int len=byteArrayToInt(len_byte,0);//总长度
byte[] msg_type_byte=new byte[4];
msg_type_byte[0]=buf[4];
msg_type_byte[1]=buf[5];
msg_type_byte[2]=buf[6];
msg_type_byte[3]=buf[7];
int msg_type=byteArrayToInt(msg_type_byte,0);//消息类型
com.google.protobuf.GeneratedMessage message=null;
byte[] bodyBuf=Arrays.copyOfRange(buf,8,len);
int body_len=len-8;
if(msg_type==MsgType.CSPASSWDLOGINMSG_TYPE)
{
	message=com.empire.msg.auto.cs.CSCSPasswdLoginMsg.CSPasswdLoginMsg.parseFrom(bodyBuf);
}
if(msg_type==MsgType.SCPLAYERINFOMSG_TYPE)
{
	message=com.empire.msg.auto.cs.SCSCPlayerInfoMsg.SCPlayerInfoMsg.parseFrom(bodyBuf);
}
Service.shareService().dispatchMsg(msg_type, message);
}

}
