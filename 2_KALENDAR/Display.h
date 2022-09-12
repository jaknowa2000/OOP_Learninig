#ifndef DISPLAY_H
#define DISPLAY_H
#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

ostream& operator<< (ostream& str, const Data& d1);
#endif
