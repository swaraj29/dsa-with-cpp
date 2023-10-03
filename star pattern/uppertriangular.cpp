#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter no rows";
    cin>>n;
    cout<<"enter no of column";
    cin>>m;
    int i, j;
    for (int i= 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            
            if(i<=j)
            {
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }
}