#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    int *p = &num;
    cout << (&p) << endl;
    cout << *(&p) << endl;  // it gives address
    cout << **(&p) << endl; // it gives value
}

