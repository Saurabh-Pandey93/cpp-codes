#include <iostream>
using namespace std;

int sum(int a, int b) {
    int sum = a + b; // Calculate the sum using the + operator
    return sum;
}

int main() {
    int s = sum(2, 3);
    cout << "sum=" << s << endl;
    return 0;
}