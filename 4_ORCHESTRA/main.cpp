//Jakub Nowakowski WCY19KX2S0
//Zad. 5. Orkiestra
#include <iostream>
#include <string>
#include "Instrument.h"
#include "Werbel.h"
#include "Trabka.h"
#include "Fortepian.h"
#include "Muzyk.h"
using namespace std;

int main(){
	
	Instrument i1;
	Werbel w1;
	Trabka t1;
	Fortepian f1; 
	i1.wydajDzwiek();
	w1.wydajDzwiek();
	t1.wydajDzwiek();
	f1.wydajDzwiek();
	muzyk(i1);
	muzyk(w1);
	muzyk(t1);
	muzyk(f1);
	i1.toString();
	w1.toString();
	t1.toString();
	f1.toString();
	Instrument *i2;
	i2=&i1;
	i2->wydajDzwiek();
	i2=&w1;
	i2->wydajDzwiek();
	i2=&t1;
	i2->wydajDzwiek();
	i2=&f1;
	i2->wydajDzwiek();
	
	return 0;
}

