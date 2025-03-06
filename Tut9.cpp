//What we will learn
// 1 Control structures 
// 2 IF/ELSE

// Types of basic structure :

// 1 sequence structure :

//     entry
//      ||
//      \/
//    action 1
//      ||
//      \/
//    action 2
//      ||
//      \/
//     exit

// 2 selection structure :

//     entry
//      ||
//      \/
//    condition --> true --> action 1 --> exit
//      ||
//      \/
//     false
//      ||
//      \/
//     exit

// 3 loop structure :

//     entry
//      ||
//      \/
//     loop <-------------------
//      ||                    /\
//      \/                    ||
//   condition --> true --> action 1
//      ||
//      \/
//    false
//      ||
//      \/
//    action 2
//      ||
//      \/
//     exit

#include <iostream>

using namespace std;
int age;

int cases()
{
    switch (age)
    {
    case 3:
        cout<<"you are 3 years old";
        break;
    
     case 18:
        cout<<"you are 18 years old";
        break;
    
     case 22:
        cout<<"you are 22 years old";
        break;
    
     case 66:
        cout<<"you are 66 years old";
        break;
    

    default:
        cout<<"nothing special in you";
        break;
    }
}  

int main()
{
    cout<<"tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age > 0))
    {
        cout<<"you cannot come to the party"<<endl;
    }
    else if (age == 18)
    {
        cout<<"you can come but still a kid"<<endl;
    }
    else if (age < 1)
    {
        cout<<"you liar"<<endl;
    }
    
    else 
    {
        cout<<"you can enjoy my boy"<<endl;
    }

    cases();
    
    return 0;
}


int hii = 6;


