#pragma once
using namespace System;

ref class YaraException : Exception
{
private:
	int yaraError;

public:
	property int YaraError{
public:
	int get()
	{
		return yaraError;
	}
	}
	YaraException(int err, String^ message);
};

