#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        cout << "Base class sum: ";
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        cout << "Derived class sum: ";
        return a + b + c;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    cout << baseObj.sum(1, 2, 3) << endl;

    cout << derivedObj.sum(4, 5, 6) << endl;

    cout << derivedObj.Base::sum(7, 8, 9) << endl;
  
    Base *ptr = &derivedObj;
    cout << ptr->sum(10, 11, 12) << endl;

    return 0;
}
