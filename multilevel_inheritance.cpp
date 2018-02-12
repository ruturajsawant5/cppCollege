#include<iostream>
using namespace std;

class student{
	protected:
		int rollNumber;
	public:
		void getNumber(int a){
			rollNumber = a;
		}
		void putNumber(void){
			cout<<"Roll Number : "<<rollNumber<<endl;
		}
};

class test :public student{
	protected:
		float sub1;
		float sub2;
	public:
		void getMark(float x , float y){
			sub1=x;
			sub2=y;
		}
		void putMark(){
			cout<<"Marks in subject 1 :"<<sub1<<endl;
			cout<<"Marks in subject 2 :"<<sub2<<endl;
		}
};

class result :public test{
	float total;
	public:
		void display(){
		float total = sub1+sub2;
		putNumber();
		putMark();
		cout<<"Total : "<<total<<endl;
		}
};

int main()
{
	result std1;
	std1.getNumber(66);
	std1.getMark(60.2,66.77);
	std1.display();
}
