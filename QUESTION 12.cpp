#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Get input from user
    cout << "Enter a number: ";
    cin >> number;
    
    // Check if number is both odd AND divisible by 3
    // Odd: number % 2 != 0
    // Divisible by 3: number % 3 == 0
    if ((number % 2 != 0) && (number % 3 == 0)) {
        cout << number << " is both odd and divisible by 3." << endl;
        cout << "Examples: 3, 9, 15, 21, 27..." << endl;
    } else {
        cout << number << " is NOT both odd and divisible by 3." << endl;
        if (number % 2 == 0) {
            cout << "It is even (not odd)." << endl;
        }
        if (number % 3 != 0) {
            cout << "It is not divisible by 3." << endl;
        }
    }
    
    return 0;
}
