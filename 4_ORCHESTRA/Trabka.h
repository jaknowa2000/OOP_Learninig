#ifndef TRABKA_H
#define TRABKA_H

#include "Instrument.h"
#include <iostream>
#include <string>
using namespace std;

class Trabka : public Instrument
{
	public:
	Trabka();
	void wydajDzwiek();
	void toString();

};

#endif
