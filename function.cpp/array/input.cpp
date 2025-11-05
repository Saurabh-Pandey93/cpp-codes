#include <iostream>
using namespace std;

int main() {
    int arr[5]; // Declare arr as an array of 5 integers
    int n = sizeof(arr) / sizeof(int); // Calculate the number of elements

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Output array elements
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;

    return 0;
}

