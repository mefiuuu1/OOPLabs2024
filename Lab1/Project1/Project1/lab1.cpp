//Problema 1

//#include <stdio.h>
//#include <stdlib.h>
//int stringToInt(char* str) {
//	int rez = 0;
//	for (int i = 0; str[i] != NULL; ++i)
//		rez = rez * 10 + str[i] - '0';
//	return rez;
//}
//int main() {
//    FILE* file;
//    if (fopen_s(&file, "in.txt", "r") != 0) {
//        printf("Eroare la deschiderea fisierului!");
//        return 1;
//    }
//    char text[256];
//    int s = 0;
//    while (fgets(text, sizeof(text), file))
//        s += stringToInt(text);
//    printf("Suma numerelor este %d\n", s);
//    fclose(file);
//    return 0;
//}

// Problema 2

#include <stdio.h>
#include <string.h>
int main() {
	char prop[500];
	char* cuvinte[100];
	int nr_cuv = 0;
	char *urm_car;
	fgets(prop, sizeof(prop), stdin);
	char* cuv = strtok_s(prop, " ", &urm_car);
	while (cuv != NULL) {
		cuvinte[nr_cuv] = cuv;
		nr_cuv++;
		cuv = strtok_s(NULL, " ", &urm_car);
	}
	for (int i = 0; i < nr_cuv; i++)
		for (int j = i + 1; j < nr_cuv; j++)
			if (strlen(cuvinte[i]) < strlen(cuvinte[j])) {
				char* aux = cuvinte[i];
				cuvinte[i] = cuvinte[j];
				cuvinte[j] = aux;
			}
	for (int i = 0; i < nr_cuv; i++)
		printf("%s\n", cuvinte[i]);
	return 0;
}