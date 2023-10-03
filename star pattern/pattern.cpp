#include <iostream>
using namespace std;
int main()
{
    int n, m, count;
    cout << "enter no of rows";
    cin >> n;
    cout << "enter no of column";
    cin >> m;
    count = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}
