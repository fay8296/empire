#pragma once
#ifndef XF_MessageFactory_h
#define XF_MessageFactory_h
#include "ByteBuffer.h"
#include "MsgType.h"
#include "GameService.h"
class MessageFactory
{
public:
	void parseMsg(ByteBuffer* buf);
	static MessageFactory* shareMessageFactory();
};
#endif
