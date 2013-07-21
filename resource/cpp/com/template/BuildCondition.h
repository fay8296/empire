#ifndef XF_BuildCondition_h
#define XF_BuildCondition_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class BuildCondition:public TemplateInterface
{
public:
	std::string c_id;
	std::string build_name;
	short build_type;
	short build_num;
	short condition_level;
	virtual void read(ByteBuffer* buffer);
};
#endif
