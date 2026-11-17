#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Enter the third number : ";
    cin >> c;

    if (a > b && a > c) {
        cout << "First number is the greatest";
    }
    else if (b > a && b > c) {
        cout << "Second number is the greatest";
    }
    else {
        cout << "Third number is the greatest";
    }
    return 0;
}