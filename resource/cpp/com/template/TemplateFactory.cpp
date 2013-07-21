#include "TemplateFactory.h"
#include "Role.h"
#include "Prestige.h"
#include "Knighthood.h"
#include "Goods.h"
#include "Rule.h"
#include "Build.h"
#include "BuildCondition.h"
#include "Language.h"
#include "Boat.h"
static TemplateFactory* factory=NULL;
TemplateFactory* TemplateFactory::shareTemplateFactory()
{
	if(factory==NULL){factory=new TemplateFactory();} return factory;
}
TemplateInterface* TemplateFactory::createTemplateObj(std::string templateName)
{
		if(templateName.compare("Role")==0)
		{
			return new Role();
		}
		else if(templateName.compare("Prestige")==0)
		{
			return new Prestige();
		}
		else if(templateName.compare("Knighthood")==0)
		{
			return new Knighthood();
		}
		else if(templateName.compare("Goods")==0)
		{
			return new Goods();
		}
		else if(templateName.compare("Rule")==0)
		{
			return new Rule();
		}
		else if(templateName.compare("Build")==0)
		{
			return new Build();
		}
		else if(templateName.compare("BuildCondition")==0)
		{
			return new BuildCondition();
		}
		else if(templateName.compare("Language")==0)
		{
			return new Language();
		}
		else if(templateName.compare("Boat")==0)
		{
			return new Boat();
		}
		else{return NULL;}
}
