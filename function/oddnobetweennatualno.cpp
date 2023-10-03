#include <iostream>
using namespace std;

bool isodd(int num)
{
    if(num % 2 == 0)
    {
        // number is even
        return false;
    }
    else
    {
        // number is odd
        return true;
    }



}
int main()
{
    int a = 1, b = 10;
    for(int i = a; i<=b; i++)
    {
        if(isodd(i))
        {
            cout<<i<<" ";
        }
    }
     
     return 0;
    

}