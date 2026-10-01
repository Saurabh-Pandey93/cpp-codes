#include <iostream>
using namespace std;

// Function to print array elements
void printArr(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 4, 3, 2, 9};
    int n = sizeof(arr) / sizeof(int);
    int start = 0, end = n - 1;

    // Reverse the array
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print the reversed array
    cout << "Reversed Array: ";
    printArr(arr, n);

    return 0;
}
