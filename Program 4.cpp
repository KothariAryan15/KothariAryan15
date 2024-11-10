#include <iostream>
using namespace std;

class A {
private:
    int privateA;

protected:
    int protectedA;

public:
    A(int p, int pr) : privateA(p), protectedA(pr) {}
    friend class FriendClass;
};

class B {
private:
    int privateB;

protected:
    int protectedB;

public:
    B(int p, int pr) : privateB(p), protectedB(pr) {}

    friend class FriendClass;
};

class C {
private:
    int privateC;

protected:
    int protectedC;

public:
    C(int p, int pr) : privateC(p), protectedC(pr) {}

    friend class FriendClass;
};

class FriendClass {
public:
    void displayA(A &a) {
        cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    }

    void displayB(B &b) {
        cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    }

    void displayC(C &c) {
        cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
    }

    void displayAll(A &a, B &b, C &c) {
        cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
        cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
        cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
    }
};

int main() {
    A a(10, 20);
    B b(30, 40);
    C c(50, 60);

    FriendClass friendClass;
  
    friendClass.displayA(a);
    friendClass.displayB(b);
    friendClass.displayC(c);

    cout << "\nUsing single function to display all data:\n";
    friendClass.displayAll(a, b, c);

    return 0;
}
