#include "BuildCondition.h"
void BuildCondition::read(ByteBuffer* buffer)
{
		this->c_id=buffer->readUTF();
		this->build_name=buffer->readUTF();
		this->build_type=buffer->readShort();
		this->build_num=buffer->readShort();
		this->condition_level=buffer->readShort();
}
