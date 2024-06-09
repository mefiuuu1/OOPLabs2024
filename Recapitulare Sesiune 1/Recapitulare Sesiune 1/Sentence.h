#pragma once
#include <string>
#include <vector>
#include "Procesor.h"
using namespace std;

class Sentence {
private:
	vector<Procesor*> procesators;
	string name;
public:
	Sentence(string name);
	void RunAll();
	void ListAll();
	void Run(string);
	Sentence& operator +=(Procesor* procesor);
};

