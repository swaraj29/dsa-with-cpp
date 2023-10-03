#include <iostream>
using namespace std;

char tolowercase(char ch)
{
  if(ch >= 'A' && ch <= 'Z')
  {
    char temp = ch - 'A' + 'a'; // Convert uppercase to lowercase
    return temp;
  }
  else 
  {
    return ch; // If it's already lowercase or not a letter, return it as is
  }
}

bool checkPalindrome(char a[], int n)
{
  int s = 0;
  int e = n-1;
  if(tolowercase (a[s]) != tolowercase (a[e]) )
  { 
    return 0;
  }
  else{
    s++;
    e--;
  }
  return 1;
}

void reverse(char name[], int n){
  int s = 0;
  int e = n-1;

  while(s < e)
  {
    swap(name[s++], name[e--]);
  }
}

int getlength(char name[])
{

  int count = 0;
  for(int i = 0; name[i] != '\0'; i++)
  {
    count ++;
  }

  return count;

}

int main()
{
  char name[20];
  cout << "Enter your name" << endl;
  cin >> name;

  cout << "your name is ";
  cout << name << endl;

  int len = getlength(name);

  cout << " length: " << len << endl;

  reverse(name,len);
  cout << "your name is ";
  cout << name << endl;

  cout << " palindrome or Not: " << checkPalindrome(name,len) << endl;
  cout << " CHARACATER is " << tolowercase('a') << endl;
  cout << " CHARACATER is " << tolowercase('C') << endl;

}