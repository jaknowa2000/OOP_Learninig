//Jakub Nowakowski WCY19KX2S0
//Zad. 7. Rajd
#include "Zawodnik.h"



Zawodnik::Zawodnik(int id, string imie, string nazwisko){
	this->id=id;
	for (int i=0; i<3; i++){
		numer_rejestracyjny[i]='A'+rand()%26;
	}
	for (int i=3; i<8; i++){
		numer_rejestracyjny[i]='0'+rand()%10;
	}
	for (int i=0; i<2; i++){
		prawo_jazdy[i]='A'+rand()%26;
	}
	for (int i=2; i<8; i++){
		prawo_jazdy[i]='0'+rand()%10;
	}
	this->imie=imie;
	this->nazwisko=nazwisko;
	time=0;
}

void Zawodnik::dane(){
	cout<<"ID: "<<id<<endl;
	cout<<"Imie: "<<imie<<endl;
	cout<<"Nazwisko: "<<nazwisko<<endl;
	cout<<"Dowod rejestracyjny: ";
	for(int i=0; i<8; i++){
		cout<<numer_rejestracyjny[i];
	}
	cout<<endl<<"Prawo jazdy: ";
	for(int i=0; i<8; i++){
		cout<<prawo_jazdy[i];
	}
	if(time!=0)
	cout<<endl<<"Czas: "<<time;
	cout<<endl<<endl;
}
