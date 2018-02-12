#include<iostream>
using namespace std;

class search {
		int i,n,item;
		int position;
		int array[100];
	public:
		void getdata();
		void putdata();
};

void search::getdata(void){
	cout<<"Enter number of elements in array : ";
	cin>>n;	
	cout<<"Enter Array : ";
	for(i=0;i<n;i++)	
	cin>>array[i];
	cout<<"Enter item to search : ";
	cin>>item;
}

void search::putdata(void){
	for(i=0;i<n;i++){
		if(array[i]==item){
			position=i+1;
		}
	}
	if(i==n+1)
		cout<<item<<" not found in array\n";
	else
		cout<<item<<" found at "<<position<<" position.\n";
}

int main(){
	search P;
	P.getdata();
	P.putdata();
	return 0;
}
