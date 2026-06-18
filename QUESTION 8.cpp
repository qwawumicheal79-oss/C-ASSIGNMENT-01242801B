#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Read an integer value from the user
    cout << "Enter an integer: ";
    cin >> number;
    
    // Check if the number is odd using modulus operator
    if (number % 2 != 0) {
        cout << "Odd number" << endl;
    } else {
        cout << "Even number" << endl;
    }
    
    return 0;
}
