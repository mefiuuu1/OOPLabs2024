#pragma once
class Procesor {
public:
	virtual string GetName() = 0;
	virtual int Compute(string) = 0;
};