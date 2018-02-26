//virtual base class
#include<iostream>
using namespace std;

class student{
	protected:
		int rollNo;	
	public:
		void get_rollNo(int a){
			rollNo = a;
		}
		void put_rollNo(){
			cout<<"Roll Number : "<<rollNo<<endl;
		}
};

class test : virtual public student{
	protected:
		float part1,part2;
	public:
		void get_marks(float x,float y){
			part1=x;
			part2=y;
		}
		void put_marks(){
			cout<<"Marks Obtained :\nPart 1 :"<<part1<<"\nPart 2 :"<<part2<<endl;
		}
};

class sport : public virtual student{
	protected:
		float score;
	public:
		void get_score(float s){
			score = s;
		}
		void put_score(){
			cout<<"Sports :"<<score<<endl;
		}
};

class result : public test,public sport{
	float total;
	public:
		void display(){
			total=part1+part2+score;
			put_rollNo();
			put_marks();
			put_score();
			cout<<"Total marks :"<<total<<endl;
		}	
};

int main()
{
result m;
m.get_rollNo(66);
m.get_marks(55.56,66.54);
m.get_score(5);
m.display();
}
/*
o/p: -
Roll Number : 66
Marks Obtained :
Part 1 :55.56
Part 2 :66.54
Sports :5
Total marks :127.1

*/
