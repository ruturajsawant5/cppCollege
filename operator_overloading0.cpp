#include<iostream>
using namespace std;

class A{
		int a;
	public:
		void get_a(int x){a=x;}
		friend A operator+(A s1,A s2){
			A temp;
			temp.a=s1.a+s2.a;
			return temp;
		}
		void display(){
		cout<<a;
		}
};

int main(){
A b,c;
b.get_a(10);
c.get_a(20);
A d;
d=b+c;
cout<<"a = ";b.display();
cout<<"\nb = ";c.display();
cout<<"\nc = ";d.display();
cout<<endl;
}
