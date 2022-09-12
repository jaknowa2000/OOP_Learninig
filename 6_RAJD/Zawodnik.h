#ifndef ZAWODNIK_H
#define ZAWODNIK_H
#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <cstdlib>
#include <ctime>


using namespace std;

class Zawodnik
{
	friend class Zawody;
	friend int kolejka_sprawdz(queue <Zawodnik> kolejka, Zawodnik p);;
	protected:
	int time;
	string imie;
	string nazwisko;
	int id;
	char numer_rejestracyjny[8];
	char prawo_jazdy[8];
	public:
	Zawodnik(int id, string imie, string nazwisko);
	void dane();	
};

#endif
