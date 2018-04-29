#include <iostream>
#include "Directory.h"
#include "Component.h"
#include "File.h"

using namespace std;

int main() {
	Directory* topLevel = new Directory("Top Level", 0);
	Directory* midLevel = new Directory("Mid Level", 1);
	Directory* bottomLevel = new Directory("Bottom Level", 2);

	File* photo1 = new File(2250, "Photo 1", 0);
	File* photo2 = new File(3242, "Photo 2", 1);
	File* document1 = new File(12332, "Doc 1", 2);
	File* document2 = new File(122345, "Doc 2", 0);
	File* document3 = new File(9392, "Doc 3", 2);
	File* audio1 = new File(3234, "Audio 1", 1);
	File* audio2 = new File(13241, "Audio 2", 2);
	File* video1 = new File(122341431, "Video 1", 1);

	topLevel->addComponent(midLevel);
	topLevel->addComponent(photo1);
	topLevel->addComponent(document2);

	midLevel->addComponent(bottomLevel);
	midLevel->addComponent(audio1);
	midLevel->addComponent(video1);
	midLevel->addComponent(photo2);

	bottomLevel->addComponent(document1);
	bottomLevel->addComponent(document3);
	bottomLevel->addComponent(audio2);

	topLevel->printSize();

	

	cin.get();

	return 0;
}