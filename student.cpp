#include<iostream>
using namespace std;

class student {
		char name[20];
		int m1;
		int m2;
		float avg,percentage;
	public:
		void getdata();
		void putdata();
};

void student::getdata(void){
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Marks of first subject : ";
	cin>>m1;
	cout<<"Enter Marks of second subject : ";
	cin>>m2;
}

void student::putdata(void){
	avg=(m1+m2)/2.0;	
	percentage=((m1+m2)*100/200.0);
	cout<<"Name : "<<name;
	cout<<"\nAverage : "<<avg;
	cout<<"\nPercentage : "<<percentage<<"%\n";
}

int main(){
	student P;
	P.getdata();
	P.putdata();
	return 0;
}
