# Name: S.Tarun Managan
# PRN: 22070123118

# Data-Types-and-Variables
Variables are containers for storing data values.
We can say that data types are used to tell the variables the type of data they can store. Whenever a variable is defined in C++, 
the compiler allocates some memory for that variable based on the data type with which it is declared. Every data type requires a different amount of memory. 
These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char, float, bool, etc. 
Primitive data types available in C++ are: 

* Integer (int) --> Integers typically require 4 bytes of memory space and range from -2147483648 to 2147483647.  
* Character (char) -->  Character data type is used for storing characters (a-z or A-Z). Characters typically require 1 byte of memory space and range from -128 to 127 or 0 to 255. 
* Boolean (bool) --> Boolean data type is used for storing Boolean or logical values. A Boolean variable can store either true or false.
* Floating Point (float) --> Floating Point data type is used for storing single-precision floating-point values or decimal values. 
* Double Floating Point (double) --> Double Floating Point data type is used for storing double-precision floating-point values or decimal values. 
* Valueless or Void (void) --> Void means without any value. void data type represents a valueless entity. 
* Wide Character --> Wide character data type is also a character data type but this data type has a size greater than the normal 8-bit data type.

# Experiment NO: 1
AIM: To print Hello World

Theory: In order to print or display in c++ we use the keyword COUT<<

Algorithm:
-> STEP 1: START
-> STEP 2: cout<<"Hello World";
-> STEP 3: STOP

OUTPUT:
Hello World!

# Experiment NO: 2
AIM: Program to make a simple calculator

Theory: To program a simple calculator we simply use the arithmetic operators like: +, -, *, /

Algorithm:
-> STEP 1: START
-> STEP 2: Take two numbers from user
-> STEP 3: cout<<a+b;
-> STEP 4: cout<<a-b;
-> STEP 5: cout<<a*b;
-> STEP 5: cout<<a/b;
-> STEP 6: STOP

OUTPUT:
Enter two numbers: 3 2
The sum of a and b is: 5
The difference of a and b is: 1
The product of a and b is: 6
The division of a and b is: 1.5

# Experiment NO: 3
AIM: To take values of different data types

Theory: We can first define each variable with different data types and take their value from the user.

Algorithm:
-> STEP 1: START
-> STEP 2: Define variables with different data types
-> STEP 3: Take their inputs from the user
-> STEP 4: Print those values
-> STEP 5: STOP

OUTPUT:
Enter any integer value: 3
Enter any floating point value: 5.67
Enter any double floating point value: 7.8904
Enter any Character value: t
Enter any boolean value: 1345
Value of Integer_var is: 3
Value of Float_var is: 5.67
Value of Double_var is: 7.8904
Value of Char_var is: t
Value of flag is: 1

# Experiment NO: 4
AIM: To find the size of different data types

Theory: In order to find the size of each data type we can use sizeof() operator, which returns the size of that data type.

Algorithm:
-> STEP 1: START
-> STEP 2: Define variables with different data types
-> STEP 3: Use sizeof operator to find the size of different data types
-> STEP 4: STOP

OUTPUT:
The size of Integer_var is: 4
The size of Float_var is: 4
The size of Double_var is: 8
The size of Char_var is: 1
The size of flag is: 1




