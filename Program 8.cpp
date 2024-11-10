#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b) {
    return a + b;
}

template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}

template <typename T>
T sum(T a, T b, T c, T d) {
    return a + b + c + d;
}

int main() {
    cout << "Sum of two integers (5, 10): " << sum(5, 10) << endl;
    cout << "Sum of three doubles (2.5, 3.5, 4.5): " << sum(2.5, 3.5, 4.5) << endl;
    cout << "Sum of four floats (1.1, 2.2, 3.3, 4.4): " << sum(1.1f, 2.2f, 3.3f, 4.4f) << endl;

    return 0;
}
