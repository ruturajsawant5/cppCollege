//friend function
#include<iostream>
using namespace std;

class sample{
		int a,b;
	public:
		void setValue(){
			a=25;
			b=40;
		}
		friend float mean(sample s);
};

float mean (sample s){
	float m;
	m=(s.a+s.b)/2.0;
	return m;
}

int main(){
	sample x;
	x.setValue();
	cout<<"Mean Value = "<<mean(x)<<endl;
}
/*
o/p:-
Mean Value = 32.5

*/
