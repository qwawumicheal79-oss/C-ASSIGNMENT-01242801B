#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // A number is a power of 2 if it's positive and (n & (n-1)) == 0
    // Example: 8 (1000) & 7 (0111) = 0
    // Example: 6 (0110) & 5 (0101) = 4 (not 0)
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 8, 16, 31, 32, 64, 100, 128, 256};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    cout << "Checking if numbers are powers of 2:\n";
    cout << "------------------------------------\n";
    
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " is " 
             << (isPowerOfTwo(numbers[i]) ? "a power of 2" : "NOT a power of 2")
             << endl;
    }
    
    // Interactive version
    cout << "\nEnter a number to check (or 0 to exit): ";
    int num;
    while (cin >> num && num != 0) {
        if (isPowerOfTwo(num)) {
            cout << num << " is a power of 2!" << endl;
        } else {
            cout << num << " is NOT a power of 2." << endl;
        }
        cout << "Enter another number (0 to exit): ";
    }
    
    return 0;
}
