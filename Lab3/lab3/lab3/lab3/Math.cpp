#include "Math.h"
#include <cstring>
int Math::Add(int x,int y) {
	return x + y;
}
int Math::Add(int x, int y, int z) {
	return x + y + z;
}
double Math::Add(double x, double y) {
	return double(x + y);
}
double Math::Add(double x, double y, double z) {
	return x + y + z;
}
int Math::Mul(int x, int y) {
	return x * y;
}
int Math::Mul(int x, int y, int z) {
	return x * y * z;
}
double Math::Mul(double x, double y) {
	return x * y;
}
double Math::Mul(double x, double y, double z) {
	return x * y * z;
}
char* Add(const char* x, const char* y) {
	char* z;
	z = new char[20];
	strcpy_s(z, 20, x);
	strcat_s(z, 20, y);
	return z;
}