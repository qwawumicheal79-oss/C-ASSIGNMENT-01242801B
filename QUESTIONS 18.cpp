#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0;
    int power = 0;
    
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * pow(2, power);
        binary /= 10;
        power++;
    }
    
    return decimal;
}

int main() {
    int binary;
    
    cout << "Enter a binary number: ";
    cin >> binary;
    
    int decimal = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << decimal << endl;
    
    return 0;
}
