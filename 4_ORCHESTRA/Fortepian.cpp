#include "Fortepian.h"
#include <iostream>
#include <string>
using namespace std;

Fortepian::Fortepian()
{
		this->name="Fortepian";
}

void Fortepian::wydajDzwiek(){
	cout<<"DZWIEK FORTEPIANU"<<endl;
}

void Fortepian::toString(){
	cout<<"Stan fortepianu: "<<endl<<"Nazwa: "<<name<<endl;
}
