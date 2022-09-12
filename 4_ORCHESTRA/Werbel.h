#ifndef WERBEL_H
#define WERBEL_H

#include "Instrument.h"
#include <iostream>
#include <string>
using namespace std;

class Werbel : public Instrument
{	
	public:
	Werbel();
	void wydajDzwiek();
	void toString();
};

#endif
