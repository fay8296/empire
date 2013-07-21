#include "Language.h"
void Language::read(ByteBuffer* buffer)
{
		this->ID=buffer->readUTF();
		this->CH=buffer->readUTF();
		this->EN=buffer->readUTF();
		this->TW=buffer->readUTF();
}
