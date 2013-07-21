#include "Goods.h"
void Goods::read(ByteBuffer* buffer)
{
		this->good_id=buffer->readUTF();
		this->name=buffer->readUTF();
		this->color=buffer->readShort();
		this->type=buffer->readShort();
		this->level=buffer->readInt();
		this->des=buffer->readUTF();
		this->icon_id=buffer->readUTF();
		this->can_use=buffer->readShort();
		this->use_effect=buffer->readUTF();
}
