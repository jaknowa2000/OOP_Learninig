#include <iostream>
#include <string>
#include <math.h>
#include "Data.h"
#include "Display.h"
#include "Take.h"

using namespace std;

int main(){

	Data *d1=new Data(29,2,2000);
	Data *d2=new Data(29,2,2004);
	Data *d3=new Data(28,2,2100);
	Data *d4=new Data(0,0,0);
	*d1=*d2+28;
	cout<<*d2<<" + "<<"28 = "<<*d1<<endl;
	cout<<*d2<<" + 1 = ";
	*d2+=1;
	cout<<*d2<<endl;
	*d3=*d2+*d1;
	cout<<*d2<<" + "<<*d1<<" = "<<*d3<<endl;
	cout<<*d4<<" + "<<*d3<<" = ";
	*d4+=*d3;
	cout<<*d4;

	return 0;
}
