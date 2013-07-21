#ifndef XF_Knighthood_h
#define XF_Knighthood_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Knighthood:public TemplateInterface
{
public:
	int level;
	std::string name;
	std::string icon_id;
	int role_level;
	std::vector<std::string> consume_goods;
	std::vector<std::string> get_goods;
	virtual void read(ByteBuffer* buffer);
};
#endif
