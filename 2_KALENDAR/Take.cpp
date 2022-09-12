//Jakub Nowakowski WCY19KX2S0
//Zad. 6. Kalendarz 2
#include <iostream>
#include <string>
#include "Data.h"
#include "Display.h"
#include <math.h>
using namespace std;

Data take(){
	const int tab[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	cout<<"podaj dzien: ";
	float d,m,y,p;
	p=0;
	cin>>d;
	if (d<1 or d>31 or !cin or fmod(d,1)!=0)
		p=1;
	cin.clear();
	cin.ignore(123,'\n');
	cout<<"podaj miesiac: ";
	cin>>m;
	if (m<1 or m>12 or !cin or fmod(m,1)!=0)
		p=1;
	cin.clear();
	cin.ignore(123,'\n');
	cout<<"podaj rok: ";
	cin>>y;
	if (y<1 or !cin or fmod(y,1)!=0)
		p=1;
	cin.clear();
	cin.ignore(123,'\n');
	if (d>tab[(int)m-1] or ((int)y%4!=0 and m==2 and d==29 and (int)y%400!=0) or ((int)y%100==0 and m==2 and d==29 and (int)y%400!=0))
		p=1;
	if (p==1){
		Data *d1=new Data(0,0,0);
		cout<<"Zle dane, zainicjalizowano date: "<<*d1<<endl;
		return *d1;
	}
	else{
		Data *d1;
		d1=new Data((int)d, (int)m, (int)y);
		cout<<"Zainicjalizowana data: "<<*d1<<endl;
		return *d1;
	}
}
