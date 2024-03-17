//#include <iostream>
//class A {
//	int aa, bb;
//
//public:
//	int sum();
//	A(int a, int b);
//};
//
//int A::sum() {
//	return aa + bb;
//}
//
//A::A(int a, int b) :aa(a), bb(b) {
//
//};
//
//int main() {
//	A a(3,5);
//	int rez;
//	rez = a.sum();
//	std:: cout << rez;
// 	return 0;
//}

#include <iostream>
#pragma warning (disable:4996)
class A {
	int aa, bb;
	A(int a, int b);
	static A* instance;
public:
	int sum();
	static A* getInstance(int a = 0, int b = 0);
	static void freeInstance();

};

class B {
	int x;
	char a[100];
public:
	B(int a,const char* b);
	void print();
	B(const B& object);
};

B::B(const B& object) {
	this->x = object.x;
	strcpy(this->a, object.a);
}

B::B(int a, const char* b) {
	x = a;
	strcpy(this->a, b);
}

void B::print() {
	std::cout << x << "" << a;
}

A* A::instance = 0;

int A::sum() {
	return aa + bb;
}

A::A(int a, int b) : aa(a), bb(b) {

}

A* A::getInstance(int a, int b) {
	if (instance == NULL) {
		instance = new A(a, b);
	}
	return instance;
}

void A::freeInstance() {
	if(instance != NULL) {
		delete instance;
		instance = NULL;
	}
}
int main() {
	int result = A::getInstance(3, 5)->sum();
	std::cout << result;
	int result2 = A::getInstance()->sum();
	std::cout << '\n' << result2;
	A::freeInstance();
	B b1(4,"abcd"), b2(10,"efgh");
	B b3 = b1;
	B b4(b2);
	return 0;
}