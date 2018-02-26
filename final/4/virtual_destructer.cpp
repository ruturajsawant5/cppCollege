//virtual destructer
#include<iostream>
 
using namespace std;
 
class base {
  public:
    base()     
    { cout<<"Constructing base \n"; }
    virtual ~base()
    { cout<<"Destructing base \n"; }     
};
 
class derived: public base {
  public:
    derived()     
    { cout<<"Constructing derived \n"; }
    ~derived()
    { cout<<"Destructing derived \n"; }
};
 
int main(void)
{
   //derived *d;
  derived *d = new derived();  
  base *b = d;
  delete d;
 // getchar();
  return 0;
}
/*
o/p:-
Constructing base 
Constructing derived 
Destructing base 

*/
