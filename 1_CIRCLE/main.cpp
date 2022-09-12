#define _USE_MATH_DEFINES
#include <type_traits> 
#include <iostream>
#include <string>
#include "Point.h"
#include "Circle.h"
#include <math.h>
#include <climits>


int main(){
	Circle <int> x;
	x.circuit();
	x.area();
	x.display();
	x.move();
	x.flip();
	x.display();
	return 0;
}
