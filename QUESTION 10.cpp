#include <iostream>
using namespace std;

int main() {
    int num1, num2, max;

    // Get input from user
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Ternary operator to find the larger number
    max = (num1 > num2) ? num1 : num2;

    // Display the result
    cout << "The larger number is: " << max << endl;

    return 0;
}
