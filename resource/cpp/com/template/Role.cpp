#include "Role.h"
void Role::read(ByteBuffer* buffer)
{
		this->level=buffer->readInt();
		this->exp=buffer->readLong();
		this->physical=buffer->readInt();
		this->physical_recover_time=buffer->readFloat();
		short consume_count=buffer->readShort();
		if(consume_count>0)
		{
			for(int i=0;i<consume_count;i++)
			{
				std::string tmp=buffer->readUTF();
				this->consume.push_back(tmp);
			}
		}

		this->num=buffer->readShort();
}
