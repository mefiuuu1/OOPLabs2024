#include "pch.h"
TEST(TestSortare, TestElementeSortate) {
	int vector[10] = { 5,3,6,-1,2 };
	int nr = 5;
	// verifica daca e ordonat crescator
	selection_sort<int>(vector, nr);
	for (int i = 0; i < nr - 1; i++)
		ASSERT_LE(vector[i], vector[i + 1]);
}

TEST(TestSortare, TestVectorGol) {
	//verifica daca poate gestiona un vector gol
	int vector[10] = {};
	int nr = 0;
	selection_sort<int>(vector, nr);
	for (int i = 0; i < nr - 1; i++)
		ASSERT_LE(vector[i], vector[i + 1]);
}

TEST(TestSortare, TestUnElement) {
	//verifica daca poate gestiona un vector cu un singur element
	int vector[10] = { 5 };
	int nr = 1;
	selection_sort<int>(vector, nr);
	for (int i = 0; i < nr - 1; i++)
		ASSERT_LE(vector[i], vector[i + 1]);
}

TEST(TestSortare, TestElementeIdentice) {
	//verifica daca poate gestiona un vector cu elemente identice
	int vector[10] = { 5, 5, 5, 5, 5 };
	int nr = 5;
	selection_sort<int>(vector, nr);
	for (int i = 0; i < nr - 1; i++)
		ASSERT_LE(vector[i], vector[i + 1]);
}
