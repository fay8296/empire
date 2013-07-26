#pragma once
#ifndef XF_MessageFactory_h
#define XF_MessageFactory_h
#include "ByteBuffer.h"
#include "MsgType.h"
#include "Service.h"
class MessageFactory
{
public:
	void parseMsg(ByteBuffer* buf);
	static MessageFactory* shareMessageFactory();
};
#endif
