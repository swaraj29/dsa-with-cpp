#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int sum = 0;
    int i = 2; // Start with the first even number, which is 2
    
    while (i <= n) // Continue until i is less than or equal to n
    {
        sum += i;
        i += 2; // Increment by 2 to get the next even number
    }
    
    cout << sum << endl;
    return 0; // Return 0 to indicate successful completion
}
