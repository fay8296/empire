#ifndef XF_Keji_h
#define XF_Keji_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Keji:public TemplateInterface
{
public:
	std::string id;
	std::string name;
	int level;
	std::string des;
	std::string icon;
	int shengwang_level;
	int keji_level;
	std::vector<std::string> goods;
	int time;
	std::vector<std::string> effect;
	virtual void read(ByteBuffer* buffer);
};
#endif
