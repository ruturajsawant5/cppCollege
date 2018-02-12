#include<iostream>
using namespace std;
class point
{
int x,y;
public: 
	point(){
		x=20;
		y=40;
	}

	point(point &a)
	{
		x=a.x;
		y=a.y;
	}

	void display(){
		cout<<"x = "<<x<<endl;
		cout<<"y = "<<y<<endl;
	}
};
int main()
{
point a;
point b=a;
a.display();
b.display();
}
