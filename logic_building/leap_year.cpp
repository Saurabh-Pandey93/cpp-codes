#include <iostream>
using namespace std;
int main(){
    int year; 
    cout << "Enter the year : ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << "Year is a Leap Year";
    }
    else{
        cout << "Year is NOT a Leap Year";
    }
    return 0;
}