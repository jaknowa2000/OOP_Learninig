#include "Werbel.h"
#include <iostream>
#include <string>
using namespace std;

Werbel::Werbel()
{
	this->name="Werbel";
}

void Werbel::wydajDzwiek(){
	cout<<"DZWIEK WERBLA"<<endl;
}

void Werbel::toString(){
	cout<<"Stan werbla: "<<endl<<"Nazwa: "<<name<<endl;
}
