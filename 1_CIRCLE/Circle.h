#ifndef CIRCLE_H
#define CIRCLE_H
#include <type_traits> 
#include <iostream>
#include <string>
#include "Point.h"
#include <climits>


using namespace std;
template <typename T>
class Circle :public Point <T>
{
	private:
	double r;
	public:
	Circle ();
	void area();
	void circuit();
	void display();
};

#endif
