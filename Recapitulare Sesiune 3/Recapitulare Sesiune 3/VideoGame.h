#pragma once
#include "Article.h"
#include <string>
using namespace std;

class VideoGame : public Article {
private:
	string platform, name, type;
	int price, quantity;
public:
	VideoGame(int price, int quantity, string platform, string name);
	int GetPrice();
	int GetQuantity();
	string GetPlatform();
	string GetName();
	string GetType();
	void Print();
};

