#ifndef XF_Goods_h
#define XF_Goods_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Goods:public TemplateInterface
{
public:
	std::string good_id;
	std::string name;
	short color;
	short type;
	int level;
	std::string des;
	std::string icon_id;
	short can_use;
	std::string use_effect;
	virtual void read(ByteBuffer* buffer);
};
#endif
