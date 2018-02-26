//friend function exchange two object's values
#include<iostream>
using namespace std;
class complex2;
class complex1{
	float x,y;
	public:
		complex1(){
			x=0;
			y=0;
		}
		complex1(float a){
			x=y=a;
		}
		complex1(float real,float img){
			x=real;
			y=img;
		}
		friend void exchange(complex1&,complex2&);
		 void show();
};
class complex2{
	float x,y;
	public:
		complex2(){
			x=0;
			y=0;
		}
		complex2(float a){
			x=y=a;
		}
		complex2(float real,float img){
			x=real;
			y=img;
		}
		friend void exchange(complex1&,complex2&);
		 void show();
};

void exchange(complex1 &c1,complex2 &c2){
	complex1 temp1=c1;
	complex2 temp2=c2;	
	c1.x=temp2.x;
	c1.y=temp2.y;
	c2.x=temp1.x;
	c2.y=temp1.y;
}

void complex1::show(){
cout<<x<<" + "<<y<<"i"<<endl;
}

void complex2::show(){
cout<<x<<" + "<<y<<"i"<<endl;
}
int main(){
	complex1 a(2.7,3.5);
	cout<<"Before\nA = ";	
	a.show();
	complex2 b(1.6,12.2);
cout<<"B = ";
	b.show();
	cout<<"After\nA = ";
	exchange(a,b);
	a.show();
	cout<<"B = ";
	b.show();
	return 0;
}
/*
o/p:-
Before
A = 2.7 + 3.5i
B = 1.6 + 12.2i
After
A = 1.6 + 12.2i
B = 2.7 + 3.5i

*/
