#include "Knighthood.h"
void Knighthood::read(ByteBuffer* buffer)
{
		this->level=buffer->readInt();
		this->name=buffer->readUTF();
		this->icon_id=buffer->readUTF();
		this->role_level=buffer->readInt();
		short consume_goods_count=buffer->readShort();
		if(consume_goods_count>0)
		{
			for(int i=0;i<consume_goods_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->consume_goods.push_back(tmp);
			}
		}

		short get_goods_count=buffer->readShort();
		if(get_goods_count>0)
		{
			for(int i=0;i<get_goods_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->get_goods.push_back(tmp);
			}
		}

}
