#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    string add(string a, string b) {
        return a + b;
    }
};

int main() {
    Calculator c;

    cout << c.add(10, 20) << endl;
    cout << c.add(2.5f, 3.5f) << endl;
    cout << c.add("Hello ", "World");

    return 0;
}