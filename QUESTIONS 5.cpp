#include <iostream>

int main() {
    int firstValue, secondValue;
    
    // Read two integer values from the user
    std::cout << "Enter the first value: ";
    std::cin >> firstValue;
    
    std::cout << "Enter the second value: ";
    std::cin >> secondValue;
    
    // Check if first value is greater than second using the greater than operator
    if (firstValue > secondValue) {
        std::cout << "First value is greater" << std::endl;
    } else {
        std::cout << "Second value is greater" << std::endl;
    }
    
    return 0;
}
