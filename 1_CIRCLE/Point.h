//Jakub Nowakowski WCY19KX2S0
//Zad. 4. Circle
#ifndef POINT_H
#define POINT_H
#include <type_traits> 
#include <iostream>
#include <string>
#include <climits>

using namespace std;
template <typename T>
class Point
{
	private:
	T x,y;
	public:
	Point ();
	void loading ();
	void display ();
	void flip();
	void move();	
};

#endif
