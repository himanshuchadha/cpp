// what we will learn 

// data types are categorised in three groups

// 1 built in 
// 2 user defined 
// 3 derived

// built in data types 

// 1 int = integer 
// 2 float = integar with decimal point
// 3 char = any text character in "hello world" is char 
// 4 double = multiple integers after decimal point
// 5 boolean = if somethig is true or false

// user defined data types 

// 1 struct 
// 2 union 
// 3 enum  

// derived data types 

// 1 array 
// 2 function 
// 3 pointer 

// based on use variables are used in two types 

// 1 local variable 
// 2 global variable 

#include <iostream>

using namespace std;
//global variable
int glo =12;

int sum()
{
    cout<<glo;
}


int main()
{
    //we can also write this as:
    // int a =4;
    // int b =5;
    // local variable 
    int glo =6;
    //changing local variable
    glo=55;

    int a = 4, b = 5;
    float pi = 3.14;
    char name ='h';
    bool sike = true;
    cout<<"value of a is:"<<a<<"\n"<<"value of b is:"<<b;
    cout<<"\nvalue of pi is:"<<pi;
    cout<<"\na letter: "<<name<<"\n";
    // using function sum 
    sum();
    cout<<"/nglobal variable: "<<glo;
    cout<<"\n"<<sike;
    return 0;
}
