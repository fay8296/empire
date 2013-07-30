#ifndef XF_JiaSu_h
#define XF_JiaSu_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class JiaSu:public TemplateInterface
{
public:
	std::string type;
	std::string time;
	std::vector<std::string> goods;
	virtual void read(ByteBuffer* buffer);
};
#endif
