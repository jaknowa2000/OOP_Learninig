//Jakub Nowakowski WCY19KX2S0
//Zad. 7. Rajd
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

void showQ (queue <Zawodnik> kolejka){
	while(!kolejka.empty()){
		kolejka.front().dane();
		kolejka.pop();
	}
}

int kolejka_sprawdz (queue <Zawodnik> kolejka, Zawodnik p){
	while(!kolejka.empty()){
		for(int i=0; i<8; i++){
			if(kolejka.front().numer_rejestracyjny[i]==p.numer_rejestracyjny[i] or kolejka.front().prawo_jazdy[i]==p.prawo_jazdy[i]){
				return 1;
			}
		}
		kolejka.pop();
	}
	return 0;
}
