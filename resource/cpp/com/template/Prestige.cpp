#include "Prestige.h"
void Prestige::read(ByteBuffer* buffer)
{
		this->level=buffer->readInt();
		this->need_prestige=buffer->readLong();
}
