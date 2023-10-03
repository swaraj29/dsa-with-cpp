#include <iostream>
using namespace std;

void replacespaces(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ') // Use ' ' to represent a space
        {
            str[i] = '@';
            str.insert(i + 1, "40"); // Insert "40" after the '@'
            i += 2; // Skip the next two characters ('4' and '0')
        }
    }
}

int main()
{
    string s;
    cout << "enter the string" << endl;
    getline(cin, s);
    replacespaces(s);
    cout << s << endl;

    return 0;


// the time complexity is o(n) and the space complexity is o(1)
