#include<iostream>
using namespace std;  // <-- you forgot this line, required for cout/cin

class Complex {
    float real, imag;

public:
    void getdata();
    void putdata();
    void sum(Complex A, Complex B);  // Object as function arguments
};

void Complex::getdata() {
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
}

void Complex::putdata() {
    if (imag >= 0)
        cout << real << "+" << imag << "i";
    else
        cout << real << imag << "i";
}

void Complex::sum(Complex A, Complex B) {
    real = A.real + B.real;
    imag = A.imag + B.imag;
}

int main() {
    Complex X, Y, Z;

    X.getdata();
    Y.getdata();

    Z.sum(X, Y);

    cout << "Sum = ";
    Z.putdata();

    return 0;
}
