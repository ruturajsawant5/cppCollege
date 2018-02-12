#include<iostream>
using namespace std;

class point{
	int x,y;
	public:
		point(){
			x=0;
			y=0;
		}
		void display(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
};
int main(){
	point p;
	p.display();
}
