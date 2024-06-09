#include "ComputeVowals.h"

ComputeVowals::ComputeVowals(string name) {
	this->name = name;
}

int ComputeVowals::Compute(string name) {
	int nrVowels = 0;
	string vowels = "aeiouAEIOU";
	size_t position;
	position = name.find_first_of(vowels);

	while (position != string::npos) {
		nrVowels++;
		position = name.find_first_of(vowels, position + 1);
	}
	return nrVowels;
}

string ComputeVowals::GetName() {
	return name;
}