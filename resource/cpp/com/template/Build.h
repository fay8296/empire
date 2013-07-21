#ifndef XF_Build_h
#define XF_Build_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Build:public TemplateInterface
{
public:
	std::string build_id;
	std::string build_name;
	short level;
	std::string des;
	short type;
	std::string produce_type;
	int produce_num;
	long build_time;
	std::vector<std::string> consume_goods;
	std::vector<std::string> upgrade_add;
	std::string imag_id;
	std::string icon_id;
	std::string effect_id;
	virtual void read(ByteBuffer* buffer);
};
#endif
