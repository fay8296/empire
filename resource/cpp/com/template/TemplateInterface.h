#ifndef XF_TemplateInterface_h
#define XF_TemplateInterface_h
#include "ByteBuffer.h"
class TemplateInterface
{
public:
	virtual void read(ByteBuffer* buffer);
};
#endif
