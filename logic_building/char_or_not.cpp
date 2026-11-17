#include <iostream>
using namespace std;
int main (){
    char ch; 
    cout << "Enter the input : ";
    cin >> ch;
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        cout << "The character is the alphabet";
    }
    else if (ch >= '0' && ch <= '9'){
        cout << "The character is the Number";
    }
    else {
        cout << "The character is special character";
    }
    return 0;
}