#include "NumberList.h"
#include <iostream>
void NumberList::Init() {
	this->count = 0;
}

bool NumberList::Add(int x) {
	this->numbers[count] = x;
	this->count++;
	if (this->count >= 10)
		return false;
}

void NumberList::Sort() {
	for (int i = 0; i < this->count - 1; i++)
		for (int j = i; j < this->count; j++)
			if (this->numbers[i] > this->numbers[j]) {
				this->numbers[i] = this->numbers[j] + this->numbers[i];
				this->numbers[j] = this->numbers[i] - this->numbers[j];
				this->numbers[i] = this->numbers[i] - this->numbers[j];
			}
}

void NumberList::Print() {
	for (int i = 0; i < this->count; i++)
		printf("%d ", this->numbers[i]);
}