 #include <iostream>
#include <cstdio>
using namespace std;
int main() {
    // Complete the code.
    int i,n,a,b;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            cout<<i<<endl;
            cout<<"eight"<<endl;
        }
        else if(i%2==1)
        {
            cout<<"eleven";
        }
          
    }
    return 0;

}