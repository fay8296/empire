#include "Rule.h"
void Rule::read(ByteBuffer* buffer)
{
		this->level=buffer->readInt();
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

		this->probability=buffer->readFloat();
		this->num=buffer->readInt();
}
