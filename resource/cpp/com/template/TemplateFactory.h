#ifndef XF_TemplateFactory_h
#define XF_TemplateFactory_h
#include "TemplateInterface.h"
#include <string>
class TemplateFactory
{
public:
	static TemplateFactory* shareTemplateFactory();
	TemplateInterface* createTemplateObj(std::string templateName);
};
#endif
