//Jakub Nowakowski WCY19KX2S0
//Zad. 6. Kalendarz 2
#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

ostream& operator<< (ostream& str, const Data& d1){
	return str<<d1.day<<"/"<<d1.month<<"/"<<d1.year;
}


