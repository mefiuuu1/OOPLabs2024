//#include <iostream>
//#include <stdlib.h>
//#include <stdio.h>
//#include "FirstClass.h"
//using namespace std;
//int main() {
//	FirstClass f1;
//	FirstClass f2;
//	FirstClass f3;
//
//	f1.setNota(5);
//	f1.setNume((char*) "student 1");
//	f2.setNota(7);
//	f2.setNume((char*) "student 2");
//	f3.setNota(10);
//	f3.setNume((char*) "student 3");
//	
//	printf("F1; nume: %s | nota: %d\n", f1.getNume(), f1.getNota());
//	printf("F2; nume: %s | nota: %d\n", f2.getNume(), f2.getNota());
//	printf("F3; nume: %s | nota: %d\n", f3.getNume(), f3.getNota());
//
//
//
//	FirstClass f4;
//
//	printf("F4; nume: %s | nota: %d\n", f4.getNume(), f4.getNota());
//
//	FirstClass f5((char*)"student 5", 25);
//
//	printf("F5; nume: %s | nota: %d\n", f5.getNume(), f5.getNota());
//
//
//
//	system("pause");
//}
// exercitiul 1
//#include <iostream>
//#include "NumberList.h"
//using namespace std;
//int main() {
//	NumberList a;
//	a.Init();
//	a.Add(1);
//	a.Add(2);
//	a.Add(3);
//	a.Add(0);
//	a.Add(2);
//	a.Sort();
//	a.Print();
//	return 0;
//}
//exercitiul 2
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "Student.h"
#include "globalfct.h"
using namespace std;
int main() {
	Student a;
	a.setNume((char*) "Matei");
	a.setMate(10.0);
	a.setEng(10.0);
	a.setIst(6.0);
	printf("Nume: %s | Mate: %4.2f | Eng: %4.2f | Ist: %4.2f | Media: %4.2f \n", a.getNume(), a.getMate(), a.getEng(), a.getIst(), a.Medie());
	Student b;
	b.setNume((char*) "Edi");
	b.setMate(8.0);
	b.setEng(5.0);
	b.setIst(10.0);
	printf("Nume: %s | Mate: %4.2f | Eng: %4.2f | Ist: %4.2f | Media: %4.2f \n", b.getNume(), b.getMate(), b.getEng(), b.getIst(), b.Medie());
	printf("%d | %d | %d | %d | %d \n", cmpNume(a.getNume(), b.getNume()), cmpMate(a.getMate(), b.getMate()), cmpEng(a.getEng(), b.getEng()), cmpIst(a.getIst(), b.getIst()), cmpMedie(a.Medie(), b.Medie()));
	return 0;
}