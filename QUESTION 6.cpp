#include <iostream>
#include <cctype>  // for isupper()

using namespace std;

int main() {
    char ch;
    
    // Read a character from the user
    cout << "Enter a character: ";
    cin >> ch;
    
    // Check if it's an uppercase letter using isupper() 
    // and logical AND operator (though we only need one condition here)
    if (isupper(ch) && true) {  // Using && with true to demonstrate logical AND
        cout << "Uppercase letter" << endl;
    } else {
        cout << "Not an uppercase letter" << endl;
    }
    
    return 0;
}
