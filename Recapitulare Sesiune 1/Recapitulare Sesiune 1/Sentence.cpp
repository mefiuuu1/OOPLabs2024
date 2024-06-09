#include "Sentence.h"
#include <iostream>
using namespace std;
void Sentence::RunAll() {
	for (auto it : procesators) {
		cout << "Name:" << it->GetName() << " => " << it->Compute(name)<<endl;
	}
}

void Sentence::ListAll() {
	for (auto it : procesators) {
		cout << "Name:" << it->GetName()<<endl;
	}
}

Sentence& Sentence::operator +=(Procesor* procesor) {
	procesators.push_back(procesor);
	return *this;
}

void Sentence::Run(string name) {
	for (auto it : procesators) {
		if (it->GetName() == name) {
			cout << it->Compute() << endl;
			break;
		}
	}
}