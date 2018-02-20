#include<iostream>
#include<string.h>
using namespace std;

class media{
	protected:
		char title[50];
		float price;
	public:
		media(char *s,float a){
			strcpy(title,s);
			price = a;
		}
		virtual void display()=0;
};

class book:public media{
		int pages;
	public:
		book(char *s,float a,int p):media(s,a){
			pages=p;
		}
		void display();
};

class tape:public media{
		float time;
	public:
		tape(char *s,float a,float t):media(s,a){
			time=t;
		}
		void display();
};

void book::display(){
	cout<<"*************************\nEntered Book Details are:\n*************************"<<endl;
	cout<<"Title :"<<title<<endl;
	cout<<"Pages :"<<pages<<endl;
	cout<<"Price :"<<price<<endl;
}

void tape::display(){
	cout<<"*************************\nEntered Tape Details are:\n*************************"<<endl;
	cout<<"Title :"<<title<<endl;
	cout<<"Play time :"<<time<<endl;
	cout<<"Price :"<<price<<endl;
}

int main(){
	char* title =new char[50];
	float price,time;
	int pages;
	
	cout<<"**********Enter Book Details**********"<<endl;
	cin.sync();
	cout<<"Title :";
	cin>>title;
	cin.sync();
	cout<<"Price :";
	cin>>price;
	cout<<"Pages :";
	cin>>pages;
	
	book book1(title,price,pages);
	
	cout<<"**********Enter type details**********"<<endl;
	cin.sync();
	cout<<"Title :";
	cin>>title;
	cin.sync();
	cout<<"Price :";
	cin>>price;
	cout<<"Time :";
	cin>>time;
	
	tape tape1(title,price,time);
	
	media *list[2];
	list[0]=&book1;
	list[1]=&tape1;
	
	list[0]->display();
	list[1]->display();
}
