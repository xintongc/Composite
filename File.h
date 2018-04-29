#pragma once
#include "Component.h"
#include <string>

class File : public Component
{
public:
	File(long sz, string name, int level) : Component(name, level), size(sz) {}
	~File();
	long getSize();

private:
	//Size of the file, in kB
	long size;
};

