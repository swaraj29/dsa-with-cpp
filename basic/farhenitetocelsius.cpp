#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    // Input temperature in Fahrenheit
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Convert Fahrenheit to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Display the result
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}
