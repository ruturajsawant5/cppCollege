//array of object
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
	student P[2];
	P[0].getdata();
	P[0].putdata();
	//student P2;
	P[1].getdata();
	P[1].putdata();
	return 0;
}
/*
o/p:-
Enter Name : Ruturaj
Enter Marks of first subject : 66
Enter Marks of second subject : 77
Name : Ruturaj
Average : 71.5
Percentage : 71.5%
Enter Name : Sawant
Enter Marks of first subject : 55
Enter Marks of second subject : 44
Name : Sawant
Average : 49.5
Percentage : 49.5%
*/
