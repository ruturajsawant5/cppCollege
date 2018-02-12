#include<iostream>
using namespace std;
class mathops{
	float a,b,c;
	public :
		void getdata(int x,int y){
		a=x;
		b=y;
		}
		void add(){
		cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
		}
		void sub(){
		cout<<"The substraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
		}
		void mul(){
		cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
		}
		void div(){
		c=(a/b);
		cout<<"The division of "<<a<<" and "<<b<<" is "<<c<<endl;
		}
};
int main(){
	int a,b,choice,i;
	mathops m1;
	cout<<"Enter two numbers : ";
	cin>>a>>b;
	m1.getdata(a,b);
	do{
		cout<<"\n\n######MENU######\n1.Addition\n2.Substraction\n3.Multipliaction\n4.Division\n5.Exit\n\nEnter your choice : ";
		cin>>choice;
		switch(choice){
			case 1:
				m1.add();
				break;
			case 2:
				m1.sub();
				break;
			case 3:
				m1.mul();
				break;
			case 4:
				m1.div();
				break;
			case 5:
				break;
			default :
				cout<<"Invalid Choice\n";
				break;
		}
	}while(choice!=5);
	return 0;
}
