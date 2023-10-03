
#include <iostream>
using namespace std;

int main() {
   int Integer_var; // INT takes only integer values
   float Float_var; // FLOAT takes only floating point values
   double Double_var; // DOUBLE also takes floating values but of greater size than float does
   char Char_var; // CHAR takes characters as values
   bool flag; // BOOL takes either TRUE or FALSE
   const float pi = 3.14; // Constant is used to fix the value of any variable --> Cannot be changed by the user
   
   cout<< "Enter any integer value: ";
   cin >> Integer_var;
   cout<< "Enter any floating point value: ";
   cin >>Float_var ;
   cout<< "Enter any double floating point value: ";
   cin >> Double_var;
   cout<< "Enter any Character value: ";
   cin >> Char_var;
   cout<< "Enter any boolean value: ";
   cin >> flag;
   
   cout<<"Value of Integer_var is: "<< Integer_var<<endl;
   cout<<"Value of Float_var is: "<< Float_var<<endl;
   cout<<"Value of Double_var is: "<< Double_var<<endl;
   cout<<"Value of Char_var is: "<< Char_var<<endl;
   cout<<"Value of flag is: "<< flag<<endl;
   cout<<"Value of pi is: "<<pi;
return 0;
}
/*  OUTPUT
Value of Integer_var is: 7
Value of Float_var is: 8.9
Value of Double_var is: 76.4563
Value of Char_var is: a
Value of flag is: 0
Value of pi is: 3.14
*/
  

