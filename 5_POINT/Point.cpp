#include <type_traits> 
#include <iostream>
#include <string>
using namespace std;

class PointI {   
	private:
	int x;
	int y;
	public:
	PointI (){
		this->x=0;
		this->y=0;
	}
	
	void loading (){
		int a=0;
		while (a==0){
			cout<<"Podaj wsp. x naturalna: ";
			cin>>this->x;	
			if (x<0){
				a=0;
				cout<<"Nie jest naturalna!"<<endl;
			}
			else
			a=1;
		}
		a=0;
		while (a==0){
			cout<<"Podaj wsp. y naturalna: ";
			cin>>this->y;	
			if (y<0){
				a=0;
				cout<<"Nie jest naturalna!"<<endl;
			}
			else
			a=1;
		}
	}
	
	void display (){
		cout<<"x: "<<this->x<<"  y: "<<this->y;		
	}
	
};

class PointD {   
	private:
	double x;
	double y;
	public:
	PointD (){
		x=0;
		y=0;
	}
	
	void loading (){
		cout<<"Podaj wsp. x rzeczywista: ";
		cin>>this->x;
		cout<<"Podaj wsp. y rzeczywista: ";
		cin>>this->y;		
	}
	
	void display (){
		cout<<"x: "<<this->x<<"  y: "<<this->y;		
	}
	
};

template <typename T>
class Point {
	private:
	T x,y;
	public:
	Point (){
		this->x=0;
		this->y=0;
	}
	void loading (){
		int b=0;
		if (std::is_same<T, int>::value) {
			while (b==0){
				cout<<"Podaj wsp. x naturalna: ";
				cin>>this->x;	
				if (x<0){
					b=0;
					cout<<"Nie jest naturalna!"<<endl;
				}
				else
					b=1;
			}
			b=0;
			while (b==0){
				cout<<"Podaj wsp. y naturalna: ";
				cin>>this->y;	
				if (y<0){
					b=0;
					cout<<"Nie jest naturalna!"<<endl;
				}
				else
					b=1;
			}	
		}
		else {
			cout<<"Podaj wsp. x: ";
			cin>>this->x;
			cout<<"Podaj wsp. y: ";
			cin>>this->y;
		}
	}
	
	void display (){
		cout<<"x: "<<this->x<<"  y: "<<this->y<<endl;		
	}
	
	void flip(){
		int c=0;
		if (std::is_same<T, double>::value)
		{
			this->x=this->x*(-1);
			this->y=this->y*(-1);
			cout<<"Bylo flip"<<endl;
			c=1;
		}
		if (std::is_same<T, float>::value)
		{
			this->x=this->x*(-1);
			this->y=this->y*(-1);
			cout<<"Bylo flip"<<endl;
			c=1;
		}
		if(c==0)
			cout<<"Nie bylo flip"<<endl;
	}
	
	void move(){
		cout<<"Move:"<<endl<<"podaj przesuniecie x: ";
		double p,q;
		cin>>p;
		cout<<"podaj przesuniecie y: ";
		cin>>q;
		if (std::is_same<T, int>::value){
			p=(int)p;
			q=(int)q;
			this->x=x+p;
			this->y=y+q;
			if (x<0 or y<0){
				this->x=x-p;
				this->y=y-q;			
				cout<<"Nie bylo move"<<endl;	
			}	
			else {
				cout<<"Bylo move o ("<<p<<" , "<<q<<")"<<endl;
			}
		}
		else{
			this->x=x+p;
			this->y=y+q;
			cout<<"Bylo move o ("<<p<<","<<q<<")"<<endl;
		}
	}	
};

int main(){
	
	PointI p1; 
	PointD p2; 
	Point <int> p3;
	p3.loading();
	p3.display();
	p3.flip();
	p3.display();
	p3.move();
	p3.display();
	return 0;
	
}
