#include<iostream>
using namespace std;

class student {
		char name[20];
		int m1;
		int m2;
		int m3;
		int m4;
		int m5;
		float percentage;
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
	cout<<"Enter Marks of third subject : ";
	cin>>m3;
	cout<<"Enter Marks of forth subject : ";
	cin>>m4;
	cout<<"Enter Marks of fifth subject : ";
	cin>>m5;
}

void student::putdata(void){	
	percentage=((m1+m2+m3+m4+m5)*100/500.0);
	cout<<"Name : "<<name;
	cout<<"\nPercentage : "<<percentage<<"%\n";
	if(percentage>=66.66)
		cout<<"\nGrade : First class with Distinction";
	else if(percentage>60)
		cout<<"\nGrade : First class";
	else if(percentage>50)
		cout<<"\nGrade : Second class";
	else if(percentage>40)
		cout<<"\nGrade : Pass class";
	else 
		cout<<"\nGrade : Fail";
	cout<<"\n";
}

int main(){
	student P;
	P.getdata();
	P.putdata();
	return 0;
}
