#include <iostream>
using namespace std;

char getMaxoccCharacter(string s)
{
    int arr[26] = {0};  // Initialize an array to store character counts

    // Iterating through the input string
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];  // Get the current character from the string
        int number = 0;
        number = ch - 'a'; // Calculate the index for the character ('a' = 0, 'b' = 1, ..., 'z' = 25)
        arr[number]++;     // Increment the count for that character
    }

    int maxi = -1, ans = 0;

    // Finding the character with the maximum count
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;         // Store the index of the character with the max count
            maxi = arr[i];   // Update the maximum count
        }
    }

    char finalans = 'a' + ans;  // Convert the index back to a character
    return finalans;            // Return the character with the maximum count
}

int main()
{
    string s;
    cin >> s;                    // Input a string
    cout << getMaxoccCharacter(s) << endl;  // Find and print the character with the max count
    return 0;
}
