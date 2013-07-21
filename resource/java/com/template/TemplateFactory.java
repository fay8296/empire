package com.template;
import com.template.*;
public class TemplateFactory
{
public static TemplateFactory templateFactory=null;
	private TemplateFactory(){}
	public static TemplateFactory shareTemplateFactory()
	{
		if(templateFactory==null){templateFactory=new TemplateFactory();} return templateFactory;
	}
	public  TemplateInterface createTemplateObj(String templateName)
	{
		if(templateName.equals("Role"))
		{
			return new Role();
		}
		else if(templateName.equals("Prestige"))
		{
			return new Prestige();
		}
		else if(templateName.equals("Knighthood"))
		{
			return new Knighthood();
		}
		else if(templateName.equals("Goods"))
		{
			return new Goods();
		}
		else if(templateName.equals("Rule"))
		{
			return new Rule();
		}
		else if(templateName.equals("Build"))
		{
			return new Build();
		}
		else if(templateName.equals("BuildCondition"))
		{
			return new BuildCondition();
		}
		else if(templateName.equals("Language"))
		{
			return new Language();
		}
		else if(templateName.equals("Boat"))
		{
			return new Boat();
		}
		else{return null;}
	}
}
