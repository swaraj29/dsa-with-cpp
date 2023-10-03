#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter no rows";
    cin>>n;
    cout<<"enter no of column";
    cin>>m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i+j>=3)
            cout<<"* ";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
