//What we will learn
// 1 pointer

//what is pointer ---> it is a data type which holds the address of other data types.

#include <iostream>
using namespace std;

int main()
{
    int a=3;
    int * b =&a;
    //& ---> address of operator :
    cout<<b<<endl;
    cout<<&a<<endl;
    
    //* ---> Dereference operator :
    cout<<*b<<endl;

    // pointr to pointer
    int **c = &b;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;

    return 0;
}