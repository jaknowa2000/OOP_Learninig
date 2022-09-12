#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Zawodnik.h"
#include "Zawody.h"
#include "ShowQ.h"



using namespace std;

Zawody::Zawody(){
	r1=0;
	r2=0;	
}

void Zawody::dodaj(int id, string imie, string nazwisko){
	cout<<endl<<"DODANO ZAWODNIKA"<<endl<<endl;
	int pom=1;
	while(pom){
		Zawodnik *p=new Zawodnik(id, imie, nazwisko);
		pom=kolejka_sprawdz(kolejka, *p);
	}
	kolejka.push(Zawodnik(id, imie, nazwisko));
}

void Zawody::wyswietl_kolejke(){
	if(kolejka.size()==0){
		cout<<endl<<"BRAK ZAWODNIKOW W KOLEJCE"<<endl<<endl;
	}
	else{
		cout<<endl<<"ZAWODNICY W KOLEJCE: "<<endl;
		showQ(kolejka);
	}
}

void Zawody::start_zawodnika(){
	if(kolejka.size()==0){
		cout<<endl<<"BRAK ZAWODNIKOW"<<endl;
	}
	else{
		kolejka.front().time=(rand()%180)+1;
		klasyfikacja.push_back(kolejka.front());
		kolejka.pop();
		cout<<endl<<"WYSTARTOWAL"<<endl<<endl;
	}
}

void Zawody::wyswietl_klasyfikacje(){
		if(klasyfikacja.size()==0){
			cout<<endl<<"BRAK ZAWODNIKOW KTORZY UKONCZYLI RAJD"<<endl<<endl;
		}
		else{
		cout<<endl<<"KLASYFIKACJA: "<<endl<<endl;
		for(int i=0; i<klasyfikacja.size(); i++){
			for(int j=i; j<klasyfikacja.size(); j++){
				if(klasyfikacja[i].time>klasyfikacja[j].time){
					Zawodnik pom=klasyfikacja[j];
					klasyfikacja[j]=klasyfikacja[i];
					klasyfikacja[i]=pom;
				}
			}
		}
		for(int i=0; i<klasyfikacja.size(); i++)
			klasyfikacja[i].dane();
		}
}

void Zawody::ile_kolejka(){
	cout<<endl<<"KOLEJKA LICZY: "<<kolejka.size()<<endl<<endl;
}

void Zawody::wycofanie_zawodnika(){
	if(kolejka.size()==0){
		cout<<endl<<"BRAK ZAWODNIKOW"<<endl<<endl;
	}
	else{
		cout<<endl<<"WYCOFAL SIE ZAWODNIK: "<<endl;
		kolejka.front().dane();
		kolejka.pop();
	}
}
