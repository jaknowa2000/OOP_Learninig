#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <string>
using namespace std;


class Data
{
	protected:
	int year;
	int month;
	int day;
	
	public:
	Data(int a, int b, int c);
	friend ostream& operator <<(ostream& , const Data&);	
	friend Data take();
	Data operator +(const int &a);
	Data & operator +=(const int &a);
	Data operator +(const Data &a);
	Data & operator +=(const Data &a);
	
};


#endif
