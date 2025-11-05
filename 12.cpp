#include <iostream>
using namespace std;

class Number {
    int x;

public:
    // Function to input the number
    void getdata() {
        cout << "Enter a number: ";
        cin >> x;
    }

    // Function to display the number
    void showdata() {
        cout << "Number = " << x << endl;
    }

    // Prefix increment (++obj)
    void operator++() {
        ++x;
    }

    // Prefix decrement (--obj)
    void operator--() {
        --x;
    }

    // Postfix increment (obj++)
    void operator++(int) {
        x++;
    }

    // Postfix decrement (obj--)
    void operator--(int) {
        x--;
    }
};

int main() {
    Number n;

    n.getdata();

    cout << "\nOriginal value:\n";
    n.showdata();

    ++n; // prefix increment
    cout << "\nAfter prefix increment (++n):\n";
    n.showdata();

    n++; // postfix increment
    cout << "\nAfter postfix increment (n++):\n";
    n.showdata();

    --n; // prefix decrement
    cout << "\nAfter prefix decrement (--n):\n";
    n.showdata();

    n--; // postfix decrement
    cout << "\nAfter postfix decrement (n--):\n";
    n.showdata();

    return 0;
}
