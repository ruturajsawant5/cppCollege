#include<iostream>
using namespace std;

void add(int , int);

int main(){
	int a,b;
	cout<<"Enter two numbers :"<<endl;
	cin>>a>>b;
	add(a,b);
	return 0;
}

inline void add(int a, int b){
	cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}
