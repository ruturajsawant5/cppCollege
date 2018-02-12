#include<iostream>
using namespace std;

class complex{
	float x,y;
	public:
		complex(){
			x=0;
			y=0;
		}
		complex(float a){
			x=y=a;
		}
		complex(float real,float img){
			x=real;
			y=img;
		}
		friend complex sum(complex,complex);
		friend void show(complex);
};

complex sum(complex c1,complex c2){
	complex c3;
	c3.x=c1.x+c2.x;
	c3.y=c1.y+c2.y;
	return(c3);
}

void show(complex c){
cout<<c.x<<" + "<<c.y<<"i"<<endl;
}

int main(){
	complex a(2.7,3.5);
	complex b(1.6);
	complex c;
	c=sum(a,b);
	cout<<"A = ";
	show(a);
	cout<<"B = ";
	show(b);
	cout<<"C = ";
	show(c);
	return 0;
}
