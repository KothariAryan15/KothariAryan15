#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    Student(string n, int a, string dept, string c) 
        : name(n), age(a), department(dept), course(c) {}

    friend void displayStudentDetails(const Student &s);
};

void displayStudentDetails(const Student &s) {
    cout << "Student Details:" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    Student student("Alice", 20, "Computer Science", "BSc Hons");

    displayStudentDetails(student);

    return 0;
}
