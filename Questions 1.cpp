#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    // Get input from user
    cout << "Enter first integer: ";
    cin >> num1;
    
    cout << "Enter second integer: ";
    cin >> num2;
    
    // Calculate results
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    
    // Display results
    cout << "\nResults:" << endl;
    cout << "Sum: " << num1 << " + " << num2 << " = " << sum << endl;
    cout << "Difference: " << num1 << " - " << num2 << " = " << difference << endl;
    cout << "Product: " << num1 << " * " << num2 << " = " << product << endl;
    
    // Handle division carefully (check for division by zero)
    if (num2 != 0) {
        // Using double for more precise quotient
        double quotient = static_cast<double>(num1) / num2;
        cout << "Quotient: " << num1 << " / " << num2 << " = " << quotient << endl;
    } else {
        cout << "Quotient: Division by zero is not allowed!" << endl;
    }
    
    return 0;
}
