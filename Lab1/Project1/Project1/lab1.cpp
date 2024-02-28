#include <stdio.h>
#include <stdlib.h>
int stringToInt(char* str) {
	int rez = 0;
	for (int i = 0; str[i] != NULL; ++i)
		rez = rez * 10 + str[i] - '0';
	return rez;
}
int main() {
	FILE* file = fopen("in.txt", "r");
	char text[256];
	int s = 0;
	while (fgets(text, sizeof(text), file))
		s = stringToInt(text);
	printf("suma numerelor este %d\n", s);
	fclose(file);
	return 0;

}