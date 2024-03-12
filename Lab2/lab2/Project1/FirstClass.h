#pragma once
class FirstClass
{
	//private - nu poate fi apelat decat din interiorul clasei
	//protected - nu poate fi apelat din exterior, dar poate fi apelat dintr o clasa derivata
	//public - poate fi apelat de oriunde
private:
	int nota;
	char nume[20];
public:
	FirstClass();
	FirstClass(char* nume, int nota);
	~FirstClass();
		

	//setter pentru nota
	void setNota(int input);
	//getter pentru nota
	int getNota();

	void setNume(char* nume);

	char* getNume();

};

