#include <iostream>
#include <cmath>  // for pow() function
using namespace std;

int main() {
    double radius, area;
    const double PI = 3.14159265359;
    
    // Get radius from user
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calculate area using pow() for exponentiation
    area = PI * pow(radius, 2);
    
    // Display the result
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;
    
    return 0;
}
