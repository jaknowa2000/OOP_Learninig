//Jakub Nowakowski WCY19KX2S0
//Zad. 7. Rajd
#ifndef ZAWODY_H
#define ZAWODY_H
#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Zawodnik.h"
#include "ShowQ.h"


using namespace std;

class Zawody
{
	protected:
	queue <Zawodnik> kolejka;
	vector <Zawodnik> klasyfikacja;
	int r1;
	int r2;
	public:
	Zawody();
	void dodaj(int id, string imie, string nazwisko);
	void wyswietl_kolejke();
	void start_zawodnika();
	void wyswietl_klasyfikacje();
	void ile_kolejka();
	void wycofanie_zawodnika();
};

#endif
