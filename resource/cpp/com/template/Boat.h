#ifndef XF_Boat_h
#define XF_Boat_h
#include "TemplateInterface.h"
#include <string>
#include <vector>
class Boat:public TemplateInterface
{
public:
	std::string boat_id;
	std::string name;
	std::string des;
	short color;
	std::string build_id;
	std::vector<std::string> consume_goods;
	long build_time;
	short pos;
	long weight;
	short attack_type;
	float attack_init;
	float life_init;
	float hit_init;
	float duck_init;
	float boom_init;
	float toughness_init;
	float qte_init;
	std::vector<std::string> skill_id;
	std::vector<std::string> passive_skill_id;
	std::string attack_effect;
	std::string hit_attack;
	int attack_time;
	int hit_time;
	std::string shap_id;
	std::string icon_id;
	std::string attack_id;
	float scale;
	std::string effect;
	virtual void read(ByteBuffer* buffer);
};
#endif
