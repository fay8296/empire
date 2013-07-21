#include "Build.h"
void Build::read(ByteBuffer* buffer)
{
		this->build_id=buffer->readUTF();
		this->build_name=buffer->readUTF();
		this->level=buffer->readShort();
		this->des=buffer->readUTF();
		this->type=buffer->readShort();
		this->produce_type=buffer->readUTF();
		this->produce_num=buffer->readInt();
		this->build_time=buffer->readLong();
		short consume_goods_count=buffer->readShort();
		if(consume_goods_count>0)
		{
			for(int i=0;i<consume_goods_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->consume_goods.push_back(tmp);
			}
		}

		short upgrade_add_count=buffer->readShort();
		if(upgrade_add_count>0)
		{
			for(int i=0;i<upgrade_add_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->upgrade_add.push_back(tmp);
			}
		}

		this->imag_id=buffer->readUTF();
		this->icon_id=buffer->readUTF();
		this->effect_id=buffer->readUTF();
}
