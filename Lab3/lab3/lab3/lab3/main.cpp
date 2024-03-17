#include <iostream>
#include "Math.h"
using namespace std;
int main() {
	cout << Math::Add(3, 5) << endl;
	cout << Math::Add(3, 5, 2) << endl;
	cout << Math::Add(3.4, 5.7) << endl;
	cout << Math::Add(3.4, 5.6 ,5.3) << endl;
	cout << Math::Mul(3, 5) << endl;
	cout << Math::Mul(3, 5, 4) << endl;
	cout << Math::Mul(3.4, 5.5) << endl;
	cout << Math::Mul(3.3, 5.6, 7.3) << endl;
	cout << Math::Add("Matei ", "Edi") << endl;
}