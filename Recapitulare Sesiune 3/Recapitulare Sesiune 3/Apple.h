#pragma once
#include <string>
#include "Article.h"
using namespace std;

class Apple: public Article {
private:
	string type, origin;
	int quantity, price;
public:
	Apple(int price, int quantity, string origin);
	string GetType();
	string GetOrigin();
	int GetQuantity();
	int GetPrice();
	void Print();
};

