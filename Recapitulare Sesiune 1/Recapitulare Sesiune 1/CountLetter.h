#pragma once
#include <string>
#include <functional>
#include "Procesor.h"
using namespace std;

class CountLetter : public Procesor {
private:
	string name;
	function<bool(char)> fnc;
public:
	CountLetter(string name, function<bool(char)> fnc);
	int Compute(string name);
	string GetName();
};

