#include "MovieSeries.h"
#include "Movie.h"
#include <stdio.h>
#include <iostream>
using namespace std;
void MovieSeries::init() {
	this->count = 0;
}

void MovieSeries::add(Movie &x) {
	this->a[count] = x;
	count++;
}

void MovieSeries::print() {
	for (int i = 0; i < this->count; i++)
		printf("Nume Film: % s | Anul lansarii : % d | Scor IMDB : %.2f | Durata filmului : % d | Cati ani au trecut de la lansare : % d \n", this->a[i].getNume(), this->a[i].getAn(), this->a[i].getNota(), this->a[i].getDurata(), this->a[i].AniLansare());
}

void MovieSeries::sort() {
	int aux;
	for (int i = 0; i < this->count - 1; i++)
		for (int j = i; j < this->count; j++)
			if (this->a[i].getDurata() < this->a[j].getDurata()) {
				aux = this->a[i].getDurata();
				this->a[i].setDurata(this->a[j].getDurata());
				this->a[j].setDurata(aux);
			}
}