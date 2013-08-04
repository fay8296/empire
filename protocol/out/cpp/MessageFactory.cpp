#include "MessageFactory.h"
#include "CS.CSPasswdLoginMsg.pb.h"
#include "SC.SCPlayerInfoMsg.pb.h"
using namespace com::empire::msg::auto::cs;
static MessageFactory* factory=NULL;
MessageFactory* MessageFactory::shareMessageFactory()
{
 	if(factory==NULL){
 		factory=new MessageFactory();
 	}
	return factory;
}

void MessageFactory::parseMsg(ByteBuffer* buf)
{
	int len=buf->readShort();
	int msg_type=buf->readShort();
	int body_len=len-4;
	::google::protobuf::Message *msg_obj=NULL;
	switch (msg_type)
	{
		case CSPASSWDLOGINMSG_TYPE:
		{
			msg_obj=LoginRequest::default_instance().New();
			msg_obj->ParseFromArray(buf->buffer, body_len);
			break;
		}
		case SCPLAYERINFOMSG_TYPE:
		{
			msg_obj=LoginRequest::default_instance().New();
			msg_obj->ParseFromArray(buf->buffer, body_len);
			break;
		}
		default:break;
	}
	GameService::shareService()->disPatchMsg(msg_type, msg_obj);
}
