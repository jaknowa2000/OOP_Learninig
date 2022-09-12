//Jakub Nowakowski WCY19KX2S0
//Zad. 7. Rajd
#ifndef SHOWQ_H
#define SHOWQ_H
#include <string>
#include <iostream>
#include <vector>
#include <queue>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Zawodnik.h"
#include "Zawody.h"
using namespace std;

void showQ (queue <Zawodnik> kolejka);
int kolejka_sprawdz (queue <Zawodnik> kolejka, Zawodnik p);


#endif
