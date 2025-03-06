// What we will learn 

// 1 Header files
// 2 Operators

// Types of header files:
// 1. System header files: comes with compiler 
// 2. User header files: made by user - you can use it like #include "name of file"

#include <iostream>
using namespace std;

//*****Operators*****
 
int main()
{ 
    int a=5 , b=10;
    cout<<"Operators in c++"<<endl;
    // Arithmatic operators
    cout<<"The following are Arithmatic operator"<<endl;
    cout<<"The value of a + b: "<<a+b<<endl;
    cout<<"The value of a - b: "<<a-b<<endl;
    cout<<"The value of a * b: "<<a*b<<endl;
    cout<<"The value of a / b: "<<a/b<<endl;
    cout<<"The value of a % b: "<<a%b<<endl;
    cout<<"The value of a ++: "<<a++<<endl;
    cout<<"The value of a --: "<<a--<<endl;
    cout<<"The value of ++a: "<<++a<<endl;
    cout<<"The value of --a: "<<--a<<endl;
    cout<<endl;
    cout<<endl;

    // Assignment operators --> using to assign values to variable
    //....a = 10
    //      /\
    //      ||


    // Comparison operator
    cout<<"The following are Comparison operator"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<endl;
    cout<<endl;

    // Logical operator
    cout<<"The following are logical operator"<<endl;
    cout<<"The value of this logical 'and' operator "<<((a==b) && (a>b))<<endl;
    cout<<"The value of this logical 'or' operator "<<((a==b) || (a>b))<<endl;
    cout<<"The value of this logical 'not' operator "<<(!(a==b))<<endl;
    cout<<endl;
    cout<<endl;
    return 0;
}

//