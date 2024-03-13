#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;
void Student::setNume(char nume[20]) {
	strcpy_s(this->Nume, 20, nume);
}

void Student::setMate(float x) {
	this->Mate = x;
}

void Student::setEng(float x) {
	this->Eng = x;
}

void Student::setIst(float x) {
	this->Ist = x;
}

char* Student::getNume() {
	return this->Nume;
}

float Student::getMate() {
	return this->Mate;
}

float Student::getEng() {
	return this->Eng;
}

float Student::getIst() {
	return this->Ist;
}

float Student::Medie() {
	return (this->Mate + this->Eng + this->Ist) / 3;
}