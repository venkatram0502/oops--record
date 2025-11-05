#include <iostream>
using namespace std;

class Number {
    int x, y, z;

public:
    // Function to input values
    void getdata() {
        cout << "Enter values of x, y, z: ";
        cin >> x >> y >> z;
    }

    // Function to display values
    void showdata() {
        cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    }

    // Overload unary minus (-) operator
    void operator-() {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main() {
    Number n;

    cout << "Enter the values:\n";
    n.getdata();

    cout << "\nBefore applying unary minus:\n";
    n.showdata();

    // Applying overloaded unary minus operator
    -n;   // same as n.operator-();

    cout << "\nAfter applying unary minus:\n";
    n.showdata();

    return 0;
}
