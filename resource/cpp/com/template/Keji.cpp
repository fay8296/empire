#include "Keji.h"
void Keji::read(ByteBuffer* buffer)
{
		this->id=buffer->readUTF();
		this->name=buffer->readUTF();
		this->level=buffer->readInt();
		this->des=buffer->readUTF();
		this->icon=buffer->readUTF();
		this->shengwang_level=buffer->readInt();
		this->keji_level=buffer->readInt();
		short goods_count=buffer->readShort();
		if(goods_count>0)
		{
			for(int i=0;i<goods_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->goods.push_back(tmp);
			}
		}

		this->time=buffer->readInt();
		short effect_count=buffer->readShort();
		if(effect_count>0)
		{
			for(int i=0;i<effect_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->effect.push_back(tmp);
			}
		}

}
