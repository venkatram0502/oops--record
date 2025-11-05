#include<iostream>
using namespace std;

class complex{
    float real;
    float imag;
public:
    complex(float r=0, float i=0) {
        real = r;
        imag = i;
    }

    complex add(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << "+" << imag << "i" << endl;
    }
};
int main() {
    complex c1, c2, c3;
    c3 = c1.add(c2);
    cout << "first complex number:";
    c1.display();
    cout << "second complex number:";
    c2.display();
    cout << "sum:";
    c3.display();
    return 0;
}
