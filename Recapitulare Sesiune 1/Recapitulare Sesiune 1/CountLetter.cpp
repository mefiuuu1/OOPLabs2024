#include "CountLetter.h"
CountLetter::CountLetter(string name, function<bool(char)> fnc) {
	this->name = name;
	this->fnc = fnc;
}

string CountLetter::GetName() {
	return name;
}

int CountLetter::Compute(string name) {
	int count = 0;
	unsigned int i;
	for (i = 0; i < name.length(); i++) {
		if (fnc(name[i]) == true) {
			count++;
		}
	}
	return count;
}