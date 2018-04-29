#include "Directory.h"
#include <iostream>

using namespace std;

Directory::~Directory()
{
	for (Component* component : components) {
		delete component;
	}
}

void Directory::addComponent(Component* component) {
	this->components.push_back(component);
}

long Directory::getSize() {
	cout << this->getIndentation()<< this->getName() << endl;
	for (Component* component : components) {
		size += component->getSize();
	}
	return this->size;
}

void Directory::printSize() {
	this->getSize();
	cout << this->getIndentation() << "Total: " << this->size << endl;
}