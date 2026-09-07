#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r, int i): 
        real{r},
        imag{i}
    {}

    Complex operator-() {
        return Complex(real, -imag);
    }

    Complex operator+(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex c3 = c1 + c2;
    Complex c4 = -c1; 

    cout << "Addition: ";
    c3.display();

    cout << "Unary -: ";
    c4.display();

    return 0;
}