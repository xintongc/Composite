#include "File.h"
#include <iostream>

File::~File()
{
}

long File::getSize() {
	cout << this->getIndentation() << this->getName() << " size: " << size << endl;
	return this->size;
}
