#include <iostream>
using namespace std;

int binSearch(int* arr, int n, int key) {
    int st = 0, end = n - 1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1; // Return -1 when key is not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(int);
    cout << binSearch(arr, n, 44) << endl;
    return 0;
}
