#include <iostream>
using namespace std;

void reverse(char name[], int n) {
    int s = 0;
    int e = n - 1;

    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

int main() {
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;

    int length = 0;
    // Calculating the length of the entered string
    while (name[length] != '\0') {
        length++;
    }

    reverse(name, length);

    cout << "Reversed name: " << name << endl;

    return 0;
}
