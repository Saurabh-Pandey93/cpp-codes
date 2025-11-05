#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Error: Factorial is not defined for negative numbers." << endl;
        return -1; // Return an error code
    }
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "factorial(" << n << ") = " << fact << endl;
    return fact;
}

int main() {
    factorial(0);
    factorial(1);
    return 0;
}


