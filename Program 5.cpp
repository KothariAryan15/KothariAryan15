#include <iostream>
using namespace std;

class A {
private:
    int privateA;

protected:
    int protectedA;

public:
    A(int p, int pr) : privateA(p), protectedA(pr) {}

    friend void displayAll(const A &a, const B &b, const C &c);
};

class B {
private:
    int privateB;

protected:
    int protectedB;

public:
    B(int p, int pr) : privateB(p), protectedB(pr) {}

    friend void displayAll(const A &a, const B &b, const C &c);
};

class C {
private:
    int privateC;

protected:
    int protectedC;

public:
    C(int p, int pr) : privateC(p), protectedC(pr) {}

    friend void displayAll(const A &a, const B &b, const C &c);
};

void displayAll(const A &a, const B &b, const C &c) {
    cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
}

int main() {
    A a(10, 20);
    B b(30, 40);
    C c(50, 60);

    displayAll(a, b, c);

    return 0;
}
