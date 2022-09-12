#define _USE_MATH_DEFINES
#include <type_traits>
#include <iostream>
#include <string>
#include "Circle.h"
#include <math.h>
#include <climits>

using namespace std;
template class Circle <int>;
template class Circle <float>;
template class Circle <double>;

template <typename T>
	Circle<T>::Circle ():Point<T>()
	{
		cout<<"Podaj promien kola: ";
        	cin>>this->r;
		while (!cin.good() or r<0){
				cout<<"Zla wartosc, podaj nowa: ";
				cin.clear();
        		cin.ignore(123,'\n');
				cin>>this->r;
		}
		cout<<"Podaj srodek kola: "<<endl;
		Point<T>::loading();
	}
	
template <typename T>
	void Circle<T>::circuit(){
		cout<<"Obwod kola to: "<<M_PI*2*r<<endl;
	}

template <typename T>
	void Circle<T>::area(){
		cout<<"Pole kola to: "<<M_PI*r*r<<endl;
	}
	
template <typename T>
	void Circle<T>::display(){
		cout<<"Srodek kola to: "<<endl;
		Point<T>::display();
	}


