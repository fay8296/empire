#include "MessageFactory.h"
#include "sb.LoginRequest.pb.h"
#include "sb.LoginResponse.pb.h"
using namespace org::net::obj;
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
	int len=buf->readInt();
	int msg_type=buf->readInt();
	int body_len=len-8;
	::google::protobuf::Message *msg_obj=NULL;
	switch (msg_type)
	{
		case LOGINREQUEST_TYPE:
		{
			msg_obj=LoginRequest::default_instance().New();
			msg_obj->ParseFromArray(buf->buffer, body_len);
			break;
		}
		case LOGINRESPONSE_TYPE:
		{
			msg_obj=LoginRequest::default_instance().New();
			msg_obj->ParseFromArray(buf->buffer, body_len);
			break;
		}
		default:break;
	}
	Service::shareService()->disPatchMsg(msg_type, msg_obj);
}
