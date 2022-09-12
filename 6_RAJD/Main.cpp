//Jakub Nowakowski WCY19KX2S0
//Zad. 7. Rajd
#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include<string>
#include "Zawodnik.h"
#include "Zawody.h"
#include "ShowQ.h"


using namespace std;

int main (){
	fstream plik;
	fstream pliczek;
	plik.open("imiona.txt");
	pliczek.open ("nazwiska.txt");
	vector <string> imiona;
	vector <string> nazwiska;
	string pom;
	if (plik.good()){
		while(!plik.eof()){
			getline(plik, pom, ',');
			imiona.push_back(pom);
			getline(plik, pom);
		}
	}
	else{
		cout<<"nie poszlo";
	}
	if (pliczek.good()){
		while(!pliczek.eof()){
			getline(pliczek, pom, ',');
			nazwiska.push_back(pom);
			getline(pliczek, pom);
		}
	}
	else{
		cout<<"nie poszlo";
	}
	plik.close();
	pliczek.close();
	srand( time( NULL ) );
	Zawody *z1= new Zawody();
	int a,id;
	id=1;
	while(1){
	cout<<"Jesli chcesz: Dodac zawodnika (1), Wystartowac zawodnika (2), Wycofac zawodnika (3)"<<endl<<"Wyswietlic liste zawodnikow gotowych do startu (4), Wyswietlic ilosc zawodnikow gotowych do startu (5) "<<endl<<"Wyswietlic klasyfikacje generalna (6), Zakonczyc (7)"<<endl;
	cin>>a;
		switch(a){
			case 1:
				z1->dodaj(id, imiona[rand()%imiona.size()], nazwiska[rand()%nazwiska.size()]);
				id++;
				break;
			case 2:
				z1->start_zawodnika();
				break;
			case 3: 
				z1->wycofanie_zawodnika();
				break;
			case 4:
				z1->wyswietl_kolejke();
				break;
			case 5:
				z1->ile_kolejka();
				break;
			case 6:
				z1->wyswietl_klasyfikacje();
				break;
			case 7:
				cout<<endl<<"KONIEC RAJDU: "<<endl;
				z1->wyswietl_klasyfikacje();
				return 0;
			default:
				cout<<endl<<"NIEPOPRAWNY WYBOR"<<endl<<endl;
				break;
		}
	}

	return 0;
}
