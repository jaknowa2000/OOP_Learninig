//Jakub Nowakowski WCY19KX2S0
//Zad. 5. Orkiestra
#ifndef INSTRUMENT_H
#define INSTRUMENT_H
#include <iostream>
#include <string>
using namespace std;

class Instrument
{
	public:
	string name;
	public:
	Instrument();
	virtual void wydajDzwiek();
	virtual void toString();	
};

#endif
