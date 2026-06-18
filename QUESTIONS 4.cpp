#include <iostream>
#include <string>

int main() {
    std::string userInput;
    
    // Read a string from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, userInput);
    
    // Check if it equals "hello" using the equality operator
    if (userInput == "hello") {
        std::cout << "Hello!" << std::endl;
    } else {
        std::cout << "Goodbye!" << std::endl;
    }
    
    return 0;
}
