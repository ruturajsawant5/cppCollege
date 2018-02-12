#include<iostream>
using namespace std;

class person {
		char name[20];
		int age;
	public:
		void getdata();
		void putdata();
};

void person::getdata(void){
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Age : ";
	cin>>age;
}

void person::putdata(void){
	cout<<"\nName : "<<name;
	cout<<"\nAge : "<<age<<"\n";
}

int main(){
	person P;
	P.getdata();
	P.putdata();
	return 0;
}
