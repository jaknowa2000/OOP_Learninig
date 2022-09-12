#include "Data.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int tab[12]={31,28,31,30,31,30,31,31,30,31,30,31};
const int tabi[12]={31,29,31,30,31,30,31,31,30,31,30,31};

Data::Data(int d, int m, int y)
{
	day=d;
	month=m;
	year=y;
	if (y<0 or m<1 or m>12 or d<1 or d>tabi[(int)m-1] or ((int)y%4!=0 and m==2 and d==29 and (int)y%400!=0) or ((int)y%100==0 and m==2 and d==29 and (int)y%400!=0) ){
		day=0;
		month=0;
		year=0;
		cout<<"Zle dane, zainicjalizowano date: "<<day<<"/"<<month<<"/"<<year<<endl;
	}
	else{
		cout<<"Zainicjalizowana data: "<<day<<"/"<<month<<"/"<<year<<endl;
	}
}

Data Data:: operator +(const int &a){
	Data d1=*this;
	if (d1.day==0)
		return d1;
	d1.day=(this->day)+a;
	while(d1.day>tab[(d1.month)-1]){
		if((d1.year%4==0 and d1.year%100!=0) or (d1.year%400==0)){
			tab[1]=29;
		}
		if(d1.day>tab[(d1.month)-1]){
			d1.day=d1.day-tab[d1.month-1];
			d1.month++;
			if(d1.month>12){
				d1.month=1;
				d1.year++;
			}
		}
		if((d1.year%4==0 and d1.year%100!=0) or (d1.year%400==0)){
			tab[1]=29;
		}
		else{
			tab[1]=28;
		}	
	}
	return d1;
}

Data & Data:: operator +=(const int &a){
	if (this->day==0)
		return *this;
	(this->day)+=a;
	while((this->day)>tab[(this->month)-1]){
		if(((this->year)%4==0 and (this->year)%100!=0) or ((this->year)%400==0)){
			tab[1]=29;
		}
		if(this->day>tab[(this->month)-1]){
			(this->day)=(this->day)-tab[(this->month)-1];
			(this->month)++;
			if((this->month)>12){
				(this->month)=1;
				(this->year)++;
			}
		}
		if(((this->year)%4==0 and (this->year)%100!=0) or ((this->year)%400==0)){
			tab[1]=29;
		}	
		else{
			tab[1]=28;
		}
	}
	return *this;
}

Data Data:: operator +(const Data &a){
	Data d1=*this;
	if (d1.day==0 or a.day==0)
		return d1;
	d1.day=(this->day)+a.day;
	while(d1.day>tab[(d1.month)-1]){
		if((d1.year%4==0 and d1.year%100!=0) or (d1.year%400==0)){
			tab[1]=29;
		}
		if(d1.day>tab[(d1.month)-1]){
			d1.day=d1.day-tab[d1.month-1];
			d1.month++;
			if(d1.month>12){
				d1.month=1;
				d1.year++;
			}
		}
		if((d1.year%4==0 and d1.year%100!=0) or (d1.year%400==0)){
			tab[1]=29;
		}
		else{
			tab[1]=28;
		}	
	}
	d1.month+=a.month;
	while(d1.month>12){
		d1.month+=-12;
		d1.year++;
	}
	d1.year+=a.year;
	return d1;
}

Data & Data:: operator +=(const Data &a){
	if (this->day==0 or a.day==0)
		return *this;
	(this->day)+=a.day;
	while((this->day)>tab[(this->month)-1]){
		if(((this->year)%4==0 and (this->year)%100!=0) or ((this->year)%400==0)){
			tab[1]=29;
		}
		if(this->day>tab[(this->month)-1]){
			(this->day)=(this->day)-tab[(this->month)-1];
			(this->month)++;
			if((this->month)>12){
				(this->month)=1;
				(this->year)++;
			}
		}
		if(((this->year)%4==0 and (this->year)%100!=0) or ((this->year)%400==0)){
			tab[1]=29;
		}	
		else{
			tab[1]=28;
		}
	}
	(this->month)+=a.month;
	while((this->month)>12){
		(this->month)+=-12;
		(this->year)++;
	}
	(this->year)+=a.year;
	return *this;
}
