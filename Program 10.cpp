#include <iostream>
#include <string>
using namespace std;

template <typename T1, typename T2, typename T3, typename T4>
struct Student {
    T1 name;
    T2 age;
    T3 department;
    T4 course;

    void display() const {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student<string, int, string, string> student1{"Alice", 20, "Computer Science", "BSc Hons"};
    student1.display();

    Student<string, int, string, string> student2{"Bob", 21, "Mathematics", "BSc"};
    student2.display();

    return 0;
}
