#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i++);
        binary /= 10;
    }
    return decimal;
}

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    cout << "Decimal:     " << decimal << endl;
    cout << "Hexadecimal: " << hex << decimal << endl;
    cout << "Octal:       " << oct << decimal << endl;

    return 0;
}
