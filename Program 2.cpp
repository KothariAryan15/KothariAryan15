#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}
    
    friend class PrimeChecker;
};

class PrimeChecker {
public:
    
    bool isPrime(const Number &number) {
        int n = number.num;
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    Number number(num);
    PrimeChecker checker;

    if (checker.isPrime(number)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
