#pragma once
#include <string>
#include "Procesor.h"
using namespace std;

class LongestWord : public Procesor {
private:
	string name;
public:
	LongestWord(string name);
	int Compute(string name);
	string GetName();
};

