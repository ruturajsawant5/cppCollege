#include<iostream>
using namespace std;

int main(){
int a[100],i,n;
cout<<"Enter number of elements :";
cin>>n;
cout<<"\nEnter array :\n";
for(i=0;i<n;i++)
	cin>>a[i];
cout<<"The array is :\n";
for(i=0;i<n;i++)
	cout<<" "<<a[i];
cout<<"\n";	
return 0;
}
