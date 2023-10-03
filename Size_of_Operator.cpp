
#include <iostream>
using namespace std;

int main() {
   int Integer_var;
   float Float_var;
   double Double_var;
   char Char_var;
   bool flag;
   //'sizeof' operator is used to find the size of the memory allocated to that particular data type.
   cout<<"The size of Integer_var is: "<< sizeof(Integer_var)<<endl; e
   cout<<"The size of Float_var is: "<< sizeof(Float_var)<<endl;
   cout<<"The size of Double_var is: "<< sizeof(Double_var)<<endl;
   cout<<"The size of Char_var is: "<< sizeof(Char_var)<<endl;
   cout<<"The size of flag is: "<< sizeof(flag)<<endl;
return 0;
}
/*  OUTPUT
The size of Integer_var is: 4
The size of Float_var is: 4
The size of Double_var is: 8
The size of Char_var is: 1
The size of flag is: 1
*/
