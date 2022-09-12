//Jakub Nowakowski WCY19KX2S0
//Zad. 4. Circle
#include <type_traits> 
#include <iostream>
#include <string>
#include "Point.h"
#include <math.h>
#include <climits>

using namespace std;

template class Point <int>;
template class Point <float>;
template class Point <double>;
template <typename T>
	Point<T>::Point (){
		x=0;
		y=0;
	}
	
template <typename T>	
	void Point<T>::loading (){
		int b=0;
		if (std::is_same<T, int>::value) {
			cout<<"Podaj wsp. x naturalna: ";
			float a=0;
			cin>>a;
			while (!cin or fmod(a,1)!=0 or a<0){
				cout<<"Zla wartosc, podaj nowa: ";
				cin.clear();
       			cin.ignore(INT_MAX,'\n');
				cin>>a;
			}
			this->x=a;
			cout<<"Podaj wsp. y naturalna: ";
			cin>>a;
			while (!cin or fmod(a,1)!=0 or a<0){
				cout<<"Zla wartosc, podaj nowa: ";
				cin.clear();
       			cin.ignore(INT_MAX,'\n');
				cin>>a;
			}
			this->y=a;
		}
		else {
			cout<<"Podaj wsp. x: ";
			cin>>this->x;
			while (!cin){
				cout<<"Zla wartosc, podaj nowa: ";
				cin.clear();
       			cin.ignore(123,'\n');
				cin>>this->x;
			}
			cout<<"Podaj wsp. y: ";
			cin>>this->y;
			while (!cin){
				cout<<"Zla wartosc, podaj nowa: ";
				cin.clear();
       			cin.ignore(123,'\n');
				cin>>this->y;
			}
		}
	}
	
template <typename T>	
	void Point<T>::display (){
		cout<<"x: "<<this->x<<"  y: "<<this->y<<endl;		
	}
	
template <typename T>	
	void Point<T>::flip(){
		int c=0;
		if (std::is_same<T, double>::value)
		{
			this->x=this->x*(-1);
			this->y=this->y*(-1);
			cout<<"Bylo flip"<<endl;
			c=1;
		}
		if (std::is_same<T, float>::value)
		{
			this->x=this->x*(-1);
			this->y=this->y*(-1);
			cout<<"Bylo flip"<<endl;
			c=1;
		}
		if(c==0)
			cout<<"Nie bylo flip"<<endl;
	}

template <typename T>	
	void Point<T>::move(){
		cout<<"Move:"<<endl<<"podaj przesuniecie x: ";
		double p,q;
		cin>>p;
		while (!cin){
			cout<<"Zla wartosc, podaj nowa: ";
			cin.clear();
       		cin.ignore(123,'\n');
			cin>>p;
		}
		cout<<"podaj przesuniecie y: ";
		cin>>q;
		while (!cin){
			cout<<"Zla wartosc, podaj nowa: ";
			cin.clear();
       		cin.ignore(123,'\n');
			cin>>q;
		}
		if (std::is_same<T, int>::value){
			p=(int)p;
			q=(int)q;
			this->x=x+p;
			this->y=y+q;
			if (x<0 or y<0){
				if(this->x<0){
					this->x=0;
				}
				if(this->y<0){
					this->y=0;
				}			
				cout<<"Move nie bylo pelne"<<endl;	
			}	
			else {
				cout<<"Bylo move o ("<<p<<" , "<<q<<")"<<endl;
			}
		}
		else{
			this->x=x+p;
			this->y=y+q;
			cout<<"Bylo move o ("<<p<<","<<q<<")"<<endl;
		}
	}	


