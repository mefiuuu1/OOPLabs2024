#pragma once
#include <vector>
#include <string>
#include "Article.h"
using namespace std;

class Shop {
private:
	vector<Article*> items;

public:
	Shop& Add(Article* article);
	int GetTotalPrice();
	int GetQuantity(string type);
	void List();
};

