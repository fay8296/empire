#ifndef XF_Role_h
#define XF_Role_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Role:public TemplateInterface
{
public:
	int level;
	long exp;
	int physical;
	float physical_recover_time;
	std::vector<std::string> consume;
	short num;
	virtual void read(ByteBuffer* buffer);
};
#endif
