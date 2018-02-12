#include<iostream>
using namespace std;
class time
{
	int hr,min,sec;
	public:
		void get()
		{
			cin>>hr>>min>>sec;
		}
		void disp()
		{
			cout<<hr<<":"<<min<<":"<<sec;
			
		}
		void sum(time,time);
};
void time::sum(time t1,time t2)
{
	sec=t1.sec+t2.sec;
	min=sec/60;
	sec=sec%60;
	min=min+t1.min+t2.min;
	hr=min/60;
	min=min%60;
	hr=hr+t1.hr+t2.hr;
}
int main()
{
	time t1,t2,t3;
	cout<<"Enter 1st time:";
	t1.get();
	cout<<"Enter 2nd time:";
	t2.get();
	cout<<"The 1st time is";
	t1.disp();
	cout<<"\nThe 2nd time is";
	t2.disp();
	t3.sum(t1,t2);
	cout<<"\nThe resultant time is";
	t3.disp();
	
}
