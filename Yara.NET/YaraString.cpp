#include "stdafx.h"

namespace YaraNET
{
	YaraString::YaraString(void* dataPtr, IntPtr dataSize, IntPtr offset, IntPtr memoryAddress, String^ identifier)
	{
		this->offset = offset;
		this->memoryAddress = memoryAddress;
		this->identifierName = identifier;
		this->data = gcnew array<Byte>(dataSize.ToInt64());
		Int32 dataSize32 = Convert::ToInt32(dataSize.ToInt64());
		Marshal::Copy((IntPtr)dataPtr, this->data, 0, dataSize32);
	}
}