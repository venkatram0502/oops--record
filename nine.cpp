#include <iostream>
using namespace std;

// Function prototype
inline float area(int r);

int main() {
    int r;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "Area of circle is: " << area(r);
    return 0;
}

// Inline function definition
inline float area(int a) {
    return (3.14 * a * a);
}
