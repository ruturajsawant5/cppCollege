//function overloading
#include<iostream>
using namespace std;

int add(int,int);
int add(int,int,int);
double add(double,double);
double add(int,double);
double add(double,int);
int main(){
cout<<"Addition of 5 and 6 is "<<add(5,6)<<endl;
cout<<"Addition of 5 and 6 and 7 is "<<add(5,6,7)<<endl;
cout<<"Addition of 5.4 and 6.7 is "<<add(5.4,6.7)<<endl;
cout<<"Addition of 5 and 6.7 is "<<add(5,6.7)<<endl;
cout<<"Addition of 5.5 and 6 is "<<add(5.5,6)<<endl;
return 0;
}

int add(int a,int b){
return(a+b);
}

int add(int a,int b , int c){
return(a+b+c);
}

double add (double a ,double b){
return(a+b);
}

double add (int a , double b){
return(a+b);
}

double add (double a ,int b){
return(a+b);
}
/*
o/p: -
Addition of 5 and 6 is 11
Addition of 5 and 6 and 7 is 18
Addition of 5.4 and 6.7 is 12.1
Addition of 5 and 6.7 is 11.7
Addition of 5.5 and 6 is 11.5
*/
