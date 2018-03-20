#include<iostream>
using namespace std;

float divide(float num, float denom) {
   if ( denom == 0 ) {
      throw "Divide by Zero Error";
   }
   else {
      return (num / denom);
   }
}

int main() {
   float x = 5, y = 0;
   /* protect the piece of code using try ... catch block
      and prevent crashing of the program */
   try {
      float result = divide(x, y);
      cout << "Result : " << result << endl;
   } catch (const char *err_msg) {
      cout << "Exception Caught : " << err_msg << endl;
   }
   return 0;
}

