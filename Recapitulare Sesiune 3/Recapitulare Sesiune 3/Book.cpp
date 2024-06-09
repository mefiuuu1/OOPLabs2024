#include "Book.h"
#include <iostream>

Book::Book(int price, int quantity, string title, string author) {
	this->price = price;
	this->quantity = quantity;
	this->title = title;
	this->author = author;
}

string Book::GetType() {
	return type;
}

string Book::GetTitle() {
	return title;
}

string Book::GetAuthor() {
	return author;
}

int Book::GetQuantity() {
	return quantity;
}

int Book::GetPrice() {
	return price;
}

void Book::Print() {
	cout << type << " (Title=" << title << ", Author=" << author << ") Price=" << price << " Quantity=" << quantity << endl;
}