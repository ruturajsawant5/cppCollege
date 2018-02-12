#include<iostream>
using namespace std;

class item{
		static int count;
		int code;
	public:
		void setCode(){
			code = count++;
		}
		void showCode(){
			cout<<"object number = "<<code<<endl;
		}
		static void showCount(){
			cout<<"count = "<<count<<endl;		
		}
};

int item::count;

int main(){
	item a,b;
	a.setCode();
	b.setCode();
	item::showCount();
	item c;
	c.setCode();
	a.showCode();
	b.showCode();
	c.showCode();
	return 0;
}
