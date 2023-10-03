#include <iostream>
using namespace std;

string replacespaces(string str)
{
    string temp = "";

    // Use str.length() instead of str.length
    for (int i = 0; i < str.length(); i++)
    {
        // Use single quotes for characters, not double quotes
        // Use ' ' to represent a space character, not ""
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            // Remove the quotes around str[i] to get the character at index i
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{
    string s;
    cout << "enter the string" << endl;
    // Use getline to read the entire line, including spaces
    getline(cin, s);
    cout << replacespaces(s) << endl;

    return 0;
}

// the time complexity is o(n) and the space complexity is o(n)