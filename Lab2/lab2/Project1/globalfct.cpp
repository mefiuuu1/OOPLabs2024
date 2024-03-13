#include "globalfct.h"
#include <cstring>
int cmpNume(char* nume1, char* nume2) {
	if (strcmp(nume1, nume2) == 0)
		return 0;
	else
		if (strcmp(nume1, nume2) > 0)
			return 1;
		else
			return -1;
}

int cmpMate(float x, float y) {
	if (x == y)
		return 0;
	else
		if (x > y)
			return 1;
		else
			return -1;
}

int cmpEng(float x, float y) {
	if (x == y)
		return 0;
	else
		if (x > y)
			return 1;
		else
			return -1;
}

int cmpIst(float x, float y) {
	if (x == y)
		return 0;
	else
		if (x > y)
			return 1;
		else
			return -1;
}

int cmpMedie(float x, float y) {
	if (x == y)
		return 0;
	else
		if (x > y)
			return 1;
		else
			return -1;
}