#include <iostream>
using namespace std;
void f(int n)
{
    //base case
    if (n<1)return;
    //go and print first n-1 natural no
    f(n-1);
    cout<<n<<" ";


}

int main()
{
    f(4);
}