#ifndef XF_Rule_h
#define XF_Rule_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Rule:public TemplateInterface
{
public:
	int level;
	int role_level;
	std::vector<std::string> consume_goods;
	float probability;
	int num;
	virtual void read(ByteBuffer* buffer);
};
#endif
