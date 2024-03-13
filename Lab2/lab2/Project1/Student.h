#pragma once
class Student {
private:
	char Nume[20];
	float Mate, Eng, Ist;
public:
	void setNume(char Nume[20]);
	void setMate(float Mate);
	void setEng(float Eng);
	void setIst(float Ist);
	char* getNume();
	float getMate();
	float getEng();
	float getIst();
	float Medie();
};
