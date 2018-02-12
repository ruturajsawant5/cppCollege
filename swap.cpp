#include<iostream>
using namespace std;

int main(){
int a,b,c;
cout<<"Enter two numbers \n";
cin>>a>>b;
cout<<"The numbers before swapping a="<<a<<" b="<<b<<"\n";
c=a;
a=b;
b=c; 
cout<<"The numbers  after swapping a="<<a<<" b="<<b<<"\n";

return 0;
}
