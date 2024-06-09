#include "Zoo.h"
#include "Animal.h"
#include "Feline.h"
#include <vector>
using namespace std;
int Zoo::GetTotalAnimals()
{
	int i = 0;
	for (auto index = animals.begin(); index < animals.end(); ++index)
		i++;
	return i;
}
void Zoo::operator+=(Animal* animal) {
	animals.push_back(animal);
}

bool Zoo::operator()(string name) {	
	for (auto animal : animals) {
		if (animal->GetName() == name) {
			return true;
		}
	}
	return false;
}

vector<Animal*> Zoo::GetFishes() {
	vector<Animal*> fishes;
	for (auto animal : animals) {
		if (animal->IsAFish() == true) {
			fishes.push_back(animal);
		}
	}
	return fishes;
}
vector<Animal*> Zoo::GetBirds() {
	vector<Animal*> birds;
	for (auto animal : animals) {
		if (animal->IsABird() == true) {
			birds.push_back(animal);
		}
	}
	return birds;
}
vector<Animal*> Zoo::GetMammals() {
	vector<Animal*> mammals;
	for (auto animal : animals) {
		if (animal->IsAMammal() == true) {
			mammals.push_back(animal);
		}
	}
	return mammals;
}

vector<Feline*> Zoo::GetFelines() {
	vector<Feline*> felines;
	for (auto animal : animals) {
		Feline* feline = dynamic_cast<Feline*>(animal);
		if (feline != nullptr) {
			felines.push_back(feline);
		}
	}
	return felines;
}
