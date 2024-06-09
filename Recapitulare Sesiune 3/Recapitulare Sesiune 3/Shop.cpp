#include "Shop.h"
Shop& Shop::Add(Article* article) {
	items.push_back(article);
	return *this;
}

void Shop::List() {
	for (auto it : items) {
		it->Print();
	}
}

int Shop::GetTotalPrice() {
	int price = 0;
	for (auto it : items) {
		price = price + it->GetPrice() * it->GetQuantity();
	}
	return price;
}

int Shop::GetQuantity(string type) {
	int quantity = 0;
	for (auto it : items) {
		if (it->GetType() == type)
			quantity = quantity + it->GetQuantity();
	}
	return quantity;
}