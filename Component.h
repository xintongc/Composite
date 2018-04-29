#pragma once
#include <string>

using namespace std;

class Component
{
public:
	Component(string n, int level) : name(n), level(level) { this->setIndentation(); }
	~Component();

	virtual long getSize() = 0;
	string getName() { return name; }
	string getIndentation() { return indentation; }

	void setIndentation() {
		for (int i = 0; i < level; i++)
			indentation = indentation + "\t";
		indentation = indentation + "|";
	}


private:
	string name;
	int level;
	string indentation = "";
};

