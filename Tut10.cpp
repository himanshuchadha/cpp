//What we will learn
// 1 loops IN C++ 

// types of loops in c++

// 1 for loop
// 2 while loop
// 3 do-while loop

#include <iostream>
using namespace std;


int test()
{

    for (int i = 1,a = 6; a <= 54; i++)
    {
        a= 6 * i;
        cout<<a<<endl;
    }
    
}

int main()
{

    //santax for loop
    //for (initialization; condition; updation)
    //{
    //    loop body(c++ code)
    //}
    
    
    for (int i = 1; i < 11; i++)
    {
        cout<<i<<endl;
    }

    cout<<endl;
    cout<<endl;

    //example of in infite loop with for

    //for (int t = 1; true; t++)
    //{
    //    cout<<t<<endl;
    //}

//*************************************************************************************************************************************************

    //while loop in c++
    //while(condition)
    //{
    //  c++ statement   
    //}

    int h = 1;
    while (h <= 12)
    {
        cout<<h<<endl;
        h++;
    }

    cout<<endl;
    cout<<endl;


    //example of infinite loop with while
    //int f = 1;
    //while (true)
    //{
    //    cout<<f<<endl;
    //    f++;
    //}

    //do-while loop in c++
    //do
    //{
    //  c++ statement   
    //}while(condition)

    // difference is that we can give a false statement in do while but still it will run once 

    int y = 1;
    do
    {
        cout<<y<<endl;
        y++;
    } while (y<=40);

    cout<<endl;
    cout<<endl;
    
    test();

    return 0;
}
