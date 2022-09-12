#include "Trabka.h"
#include <iostream>
#include <string>
using namespace std;

Trabka::Trabka()
{
	this->name="Trabka";
}

void Trabka::wydajDzwiek(){
	cout<<"DZWIEK TRABKI"<<endl;
}

void Trabka::toString(){
	cout<<"Stan trabki: "<<endl<<"Nazwa: "<<name<<endl;
}
