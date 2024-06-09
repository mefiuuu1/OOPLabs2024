#pragma once
#include "Article.h"
#include <string>
using namespace std;

class Book: public Article {
private:
	string title, author, type;
	int price, quantity;
public:
	Book(int price, int quantity, string title, string author);
	int GetPrice();
	int GetQuantity();
	string GetType();
	string GetTitle();
	string GetAuthor();
	void Print();
};

