#include <iostream>
using namespace std;
int main(){
    int num ; 
    cout << "Enter the number : ";
    cin >> num;
    if (num % 5 == 0 && num % 11 == 0 ){
        cout << "Divisible by both 5 and 11";
    
    }
    else {
        cout << "Not Divisible by 5 and 11 ";
    }
    return 0;
}