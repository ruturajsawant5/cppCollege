#include<iostream>
using namespace std;

class point{
		int x,y;
	public: 
		point(int,int);
		void display(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};

point ::	point(int a,int b){
			x=a;
			y=b;
}

int main(){
	point p(20,10);
	p.display();
}
