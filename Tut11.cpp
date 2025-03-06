// what we will learn 
// 1 break
// 2 continue

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cout<<i<<endl;
        if (i==2)
        {
            break;
        }
        
    }

    for (int a = 0; a < 5; a++)
    {
        if (a==2)
        {
            continue;
        }
        cout<<a<<endl;
        
    }
    
    
    return 0;
}