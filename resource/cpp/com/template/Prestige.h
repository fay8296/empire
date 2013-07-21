#ifndef XF_Prestige_h
#define XF_Prestige_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Prestige:public TemplateInterface
{
public:
	int level;
	long need_prestige;
	virtual void read(ByteBuffer* buffer);
};
#endif
