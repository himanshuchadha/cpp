// What we will learn
// 1 constants
// 2 Manipulators
// 3 operator precedence

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 1;
    cout<<"the value of a was: "<<a<<endl;
    a = 5;
    cout<<"the value of a is now: "<<a<<endl;
    // constants in c++
    const int b = 55;
    cout<<"The value of b was: "<<b<<endl;
    //b = 6; if i will un comment this line it will give error because b is a constant
    cout<<"the value can not be changed: "<<b<<endl;

    // manipulators
    //**endl**

    cout<<"the endl make next sentence on new line: "<<a<<endl;

    //**setw()**
    int c = 123;

    cout<<"the value of a is: "<<setw(3)<<a<<endl;
    cout<<"the value of b is: "<<setw(3)<<b<<endl;
    cout<<"the value of c is: "<<setw(3)<<c<<endl;


    //operator precedence

    // how to solve a equation 
    
    int x = 3 , y = 4;
    //int c = (x*5)+y
    int z = ((((x*5)+y)-45)+87)
    cout<<z;


    return 0;
}
