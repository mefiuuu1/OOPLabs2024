#pragma once
class Movie {
private:
	char Nume[256];
	int An;
	double Nota;
	int Durata;
public:
	void setNume(char input[256]);
	void setAn(int input);
	void setNota(double input);
	void setDurata(int input);
	int AniLansare();
	char* getNume();
	int getAn();
	double getNota();
	int getDurata();
};

