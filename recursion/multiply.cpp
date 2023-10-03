#include <iostream>
using namespace std;
void f(int num,int k)
{
    //base case
    if(k==0)return;
    //assumption
    f(num,k-1);
    //self work
    cout<<(num*k)<<" ";

}





int main()
{
    f(3,3);
    return 0;

}