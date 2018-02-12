#include<iostream>
using namespace std;

int main(){

int a,b,c;
cout<<"Enter two numbers :\n";
cin>>a>>b;
cout<<"******MENU******\n1.Addition\n2.Substraction\n3.Multiplication\n4.division\n5.Exit\n****************";
int choice;
do{
cout<<"\nEnter choice :";
cin>>choice;
switch(choice){

case 1:
c=a+b;
cout<<"The addition of "<<a<<" and "<<b<<" is "<<c<<"\n";
break;

case 2:
c=a-b;
cout<<"The Substraction of "<<a<<" and "<<b<<" is "<<c<<"\n";
break;

case 3:
c=a*b;
cout<<"The of Multiplication "<<a<<" and "<<b<<" is "<<c<<"\n";
break;

case 4:
float d;
d=a/b;
cout<<"The Division of "<<a<<" and "<<b<<" is "<<d<<"\n";
break;

case 5:
break;

default:
cout<<"WRONG CHOICE ENTER COREECT CHOICE";
break;
}
}while(choice!=5);
return 0;
}
