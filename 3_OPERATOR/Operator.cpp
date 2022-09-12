#include <iostream>
#include <string>
#include <math.h>

using namespace std;


class Vector {
	public:
	double x;
	double y;
	Vector(){
		this->x=0;
		this->x=0;
	}
	Vector( double x, double y){
		this->x=x;
		this->y=y;
	}

Vector operator +(const Vector &v){
	return Vector ( this->x + v.x, this->y + v.y);
}

Vector & operator +=(const Vector & v){
	this->x +=v.x;
	this->y +=v.y;
	return * this;
}

Vector operator -(const Vector &v){
	return Vector( this->x - v.x, this->y - v.y);
}

Vector & operator -=(const Vector & v){
	this->x -=v.x;
	this->y -=v.y;
	return * this;
}

Vector operator *(const double & d){
	Vector ret;
	ret.x=this->x*d;
	ret.y=this->x*y;
	return ret;
}

Vector & operator *=(const double & d){
	this->x *= d;
	this->y *= d;
	return * this;
}

Vector operator !(){
	this->x *= -1;
	this->y *= -1;
	return * this;
}

};


int main(){
	Vector w1(1,2);
	Vector w2(3,4);
	Vector w3;
	w3=w2+w1;
	cout<<w3.x<<", "<<w3.y<<endl;
	w3=w3*3;
	cout<<w3.x<<", "<<w3.y<<endl;
	!w3;
	cout<<w3.x<<", "<<w3.y<<endl;
	return 0;
}
