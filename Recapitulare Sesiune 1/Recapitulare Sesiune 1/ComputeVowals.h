#pragma once
#include <string>
#include "Procesor.h"
using namespace std;

class ComputeVowals: public Procesor {
private:
	string name;
public:
	ComputeVowals(string name);
	int Compute(string name);
	string GetName();
};

