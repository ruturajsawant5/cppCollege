#include<iostream>
using namespace std;

int main(){
char c[100];
int n,i;

cout<<"Enter length of string :";
cin>>n;

cout<<"Enter string :\n";
for(i=0;i<n;i++)
cin>>c[i];

cout<<"The original String is \n";
for(i=0;i<n;i++)
cout<<c[i];

cout<<"\nThe original String is \n";
for(i=n-1;i>=0;i--)
cout<<c[i];

cout<<"\n";

//Palindrome
int flag;
for(i=0;i<n/2;i++){
if(c[i]!=c[n-1-i]){
		flag=0;
		cout<<"String is not palimdrome\n";
		break;
}
else
	flag=1;
}

if(flag==1)
cout<<"String is Palindrome\n";

return 0;
}
