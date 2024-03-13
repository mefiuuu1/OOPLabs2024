#pragma once
#include "Movie.h"
class MovieSeries {
private:
	Movie a[20];
	int count;
public:
	void init();
	void add(Movie &x);
	void print();
	void sort();
};

