#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int sum(int a, int b, int c, int d) {
    return a + b + c + d;
}

int main() {
    cout << "Sum of 2 and 3: " << sum(2, 3) << endl;
    cout << "Sum of 1, 4 and 5: " << sum(1, 4, 5) << endl;
    cout << "Sum of 3, 2, 1 and 4: " << sum(3, 2, 1, 4) << endl;

    return 0;
}
