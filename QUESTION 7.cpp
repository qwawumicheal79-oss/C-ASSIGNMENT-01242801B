#include <iostream>
#include <string>
using namespace std;

int main() {
    string userString;
    
    cout << "Enter a string: ";
    getline(cin, userString);
    
    // Check if the string contains 'a'
    if (userString.find('a') != string::npos) {
        cout << "Contains 'a'" << endl;
    } else {
        cout << "Does not contain 'a'" << endl;
    }
    
    return 0;
}
