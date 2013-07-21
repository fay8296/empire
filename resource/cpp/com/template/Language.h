#ifndef XF_Language_h
#define XF_Language_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Language:public TemplateInterface
{
public:
	std::string ID;
	std::string CH;
	std::string EN;
	std::string TW;
	virtual void read(ByteBuffer* buffer);
};
#endif
