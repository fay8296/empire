#include "Boat.h"
void Boat::read(ByteBuffer* buffer)
{
		this->boat_id=buffer->readUTF();
		this->name=buffer->readUTF();
		this->des=buffer->readUTF();
		this->color=buffer->readShort();
		this->build_id=buffer->readUTF();
		short consume_goods_count=buffer->readShort();
		if(consume_goods_count>0)
		{
			for(int i=0;i<consume_goods_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->consume_goods.push_back(tmp);
			}
		}

		this->build_time=buffer->readLong();
		this->pos=buffer->readShort();
		this->weight=buffer->readLong();
		this->attack_type=buffer->readShort();
		this->attack_init=buffer->readFloat();
		this->life_init=buffer->readFloat();
		this->hit_init=buffer->readFloat();
		this->duck_init=buffer->readFloat();
		this->boom_init=buffer->readFloat();
		this->toughness_init=buffer->readFloat();
		this->qte_init=buffer->readFloat();
		short skill_id_count=buffer->readShort();
		if(skill_id_count>0)
		{
			for(int i=0;i<skill_id_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->skill_id.push_back(tmp);
			}
		}

		short passive_skill_id_count=buffer->readShort();
		if(passive_skill_id_count>0)
		{
			for(int i=0;i<passive_skill_id_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->passive_skill_id.push_back(tmp);
			}
		}

		this->attack_effect=buffer->readUTF();
		this->hit_attack=buffer->readUTF();
		this->attack_time=buffer->readInt();
		this->hit_time=buffer->readInt();
		this->shap_id=buffer->readUTF();
		this->icon_id=buffer->readUTF();
		this->attack_id=buffer->readUTF();
		this->scale=buffer->readFloat();
		this->effect=buffer->readUTF();
}
