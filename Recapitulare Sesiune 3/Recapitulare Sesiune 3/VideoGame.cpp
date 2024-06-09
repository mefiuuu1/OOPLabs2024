#include "VideoGame.h"
#include <iostream>
#include <string>
using namespace std;

VideoGame::VideoGame(int price, int quantity, string platform, string name) {
	this->price = price;
	this->quantity = quantity;
	this->platform = platform;
	this->name = name;
}

int VideoGame::GetPrice() {
	return price;
}

int VideoGame::GetQuantity() {
	return quantity;
}

string VideoGame::GetPlatform() {
	return platform;
}

string VideoGame::GetName() {
	return name;
}

string VideoGame::GetType() {
	return type;
}

void VideoGame::Print() {
	cout << type << " (Platform=" << platform << ", Name=" << name << ") Price=" << price << " Quantity=" << quantity << endl;
}
