#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m = 0) {
        marks = m;
    }

    void display() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s1(85);
    Student *ptr = &s1;

    cout << "Using Pointer to Object:" << endl;
    ptr -> display();

    Student students[3] = {
        Student(75),
        Student(80),
        Student(90)
    };

    cout << "\nArray of Objects:" << endl;

    for (int i = 0; i < 3; i++) {
        students[i].display();
    }

    return 0;
}