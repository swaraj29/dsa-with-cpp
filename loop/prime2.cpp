#include <iostream>
using namespace std;

bool isprime(int n)
{
  if(n <= 1 )
  {
    return false;
  }
  for(int i = 2; i < n; i++)
  {
    if(n % i == 0)
    {
      return false;
    }
  }
  return true;

}
int main()
{
  int n;
  cin >> n;

  if(isprime(n))
  {
    cout << "it is prime no";
  }
  else
  {
    cout << " it is not a prime no";
  }
}