#include "Instrument.h"
#include <iostream>
#include <string>
using namespace std;

Instrument::Instrument()
{
		name="Instrument";
}

void Instrument::wydajDzwiek(){
	cout<<"DZWIEK INSTRUMENTU"<<endl;
}

void Instrument::toString(){
	cout<<"Stan instrumentu: "<<endl<<"Nazwa: "<<name<<endl;
}
