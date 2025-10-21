#include <iostream>
#include <cmath>   // for sqrt() function
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the length of the first side: ";
    cin >> a;

    cout << "Enter the length of the second side: ";
    cin >> b;

    // Using Pythagoras theorem
    c = sqrt((a * a) + (b * b));

    cout << "The hypotenuse of the triangle is: " << c << endl;

    return 0;
}