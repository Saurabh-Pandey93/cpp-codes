#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;

    if (num > 0){
        cout << num << " is Positive";
    }
    else if (num < 0){
        cout << num << " is Negative";
    }
    else{
        cout << num << " is Zero";
    }
    return 0;
}