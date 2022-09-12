//Jakub Nowakowski WCY19KX2S0
//Zad. 5. Orkiestra
#ifndef FORTEPIAN_H
#define FORTEPIAN_H

#include "Instrument.h"
#include <iostream>
#include <string>
using namespace std;

class Fortepian : public Instrument
{
	public:
	Fortepian();
	void wydajDzwiek();
	void toString();
};

#endif
