#include "JiaSu.h"
void JiaSu::read(ByteBuffer* buffer)
{
		this->type=buffer->readUTF();
		this->time=buffer->readUTF();
		short goods_count=buffer->readShort();
		if(goods_count>0)
		{
			for(int i=0;i<goods_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->goods.push_back(tmp);
			}
		}

}
