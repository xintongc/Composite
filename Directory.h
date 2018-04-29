#pragma once
#include "Component.h"
#include <vector>
#include <string>

using namespace std;

class Directory: public Component
{
public:
	Directory(string n, int level) : Component(n, level) { this->size = 0; }
	~Directory();
	long getSize();
	void addComponent(Component*);
	void printSize();
private:
	vector<Component*> components;
	long size;
	
};

