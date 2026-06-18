#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // Input values
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    
    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;
    
    // XOR swap algorithm
    a = a ^ b;  // Step 1: a becomes a ^ b
    b = a ^ b;  // Step 2: b becomes (a ^ b) ^ b = a
    a = a ^ b;  // Step 3: a becomes (a ^ b) ^ a = b
    
    cout << "After swap:  a = " << a << ", b = " << b << endl;
    
    return 0;
}
