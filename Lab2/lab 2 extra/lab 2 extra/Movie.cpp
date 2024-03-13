#include "Movie.h"
#include <cstring>
void Movie::setNume(char input[256]) {
	strcpy_s(this->Nume, 256, input);
}

void Movie::setAn(int input) {
	this->An = input;
}

void Movie::setNota(double input) {
	this->Nota = input;
}

void Movie::setDurata(int input) {
	this->Durata = input;
}

int Movie::AniLansare() {
	return 2024 - this->An;
}

char* Movie::getNume() {
	return this->Nume;
}

int Movie::getAn() {
	return this->An;
}

double Movie::getNota() {
	return this->Nota;
}

int Movie::getDurata() {
	return this->Durata;
}


