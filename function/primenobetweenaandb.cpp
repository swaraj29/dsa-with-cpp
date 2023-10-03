#include <iostream>
using namespace std;

bool isprime(int num)
{
    //function checks if the number is prime number or not
    for(int i = 2; i<=(num-1); i++)
    {
        if(num % i == 0) return false;
    }
    return true;
}


//optimized solution
bool isprimebtr(int num)
{
    for(int i = 2; i*i <=num;i++)
    {
        //if i^2 <= num -> i <=sqrt(num)
        if(num % i == 0) return false;
    }
}

int main()
{
    int a = 2 ,b = 40;
    for(int i = a; i <=b; i++)
    {
        if(isprimebtr(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;

}