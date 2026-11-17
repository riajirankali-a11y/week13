
#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    string name;
    int marks;

    Student(string n, int m) {
        name = n;
        marks = m;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {

    unique_ptr<Student> ptr =
        make_unique<Student>("Ria", 95);

    ptr->display();

    return 0;
}
