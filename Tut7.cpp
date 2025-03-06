//What we will learn

//1 Reference varible
//2 Typecasting

#include <iostream>
using namespace std;
int c = 45;

int main()
{
    //********Build in data types********

    int a, b, c;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    c= a+b;
    cout<<"The local sum is "<<c<<endl;
    cout<<"The global sum is "<<::c<<endl;
    cout<<endl;
    cout<<endl;

    //********Float,double and long double Literals********

    float d=34.5f;
    long double e =34.5l;
    cout<<"The size of d is "<<sizeof(34.5)<<endl;
    cout<<"The size of d is "<<sizeof(34.5f)<<endl;
    cout<<"The size of d is "<<sizeof(34.5F)<<endl;
    cout<<"The size of d is "<<sizeof(34.5l)<<endl;
    cout<<"The size of d is "<<sizeof(34.5L)<<endl;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;

    //********Reference variables********
    // Rohan --> Monty --> Rohu --> Dangerous coder

    int x = 45;
    int & y = x;
    cout<<x;
    cout<<endl;
    cout<<y;
    cout<<endl;


    //********Type casting********

    //The float is now integer

    float t = 55.55;
    cout<<"the value of t is "<<(int)t<<endl;
    cout<<"the value of t is "<<int(t)<<endl;
    

    return 0;
}
