#include <iostream>

int main() {
    double a, b;
    
    std::cout << "Enter two floating point numbers: ";
    std::cin >> a >> b;
    
    // Directly output using conditional operator
    std::cout << "Larger number is: " 
              << ((a > b) ? a : b) << std::endl;
    
    return 0;
}
