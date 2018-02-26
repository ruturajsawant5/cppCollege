//palimdrome using class
#include<iostream>
using namespace std;
//#include<conio.h>
class palindrome
{
  public:
    int n,r,rev,temp;
    void check();
};
void palindrome :: check()
{
   rev=0,temp=n;
   while(temp>0)
    {
      r=temp%10;
      temp=temp/10;
      rev=rev*10+r;
    }
    if(rev == n)
    {
      cout<<"Given number "<<n<<" is palindrome";
    }
    else
      cout<<"Given number "<<n<<" is not palindrome";
}
int main()
{
  //clrscr();
  palindrome ob;
  cout<<"Enter a number to check whether it is palindrome or not:";
  cin>>ob.n;
  ob.check();
 // getch();
}
/*
o/p:-
Enter a number to check whether it is palindrome or not:123321
Given number 123321 is palindrome

Enter a number to check whether it is palindrome or not:123123
Given number 123123 is not palindrome
*/
