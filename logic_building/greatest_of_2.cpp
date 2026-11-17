#include <iostream>
using namespace std;
int main(){
    int a , b;
    cout << a << " Enter the first number : ";
    cin >> a;
    cout << b << " Enter the second number : ";
    cin >> b;
    
if (a > b){
    cout << " First number is the greatest";
}
else if (b > a){
    cout << " Second number is the greatest";
}
else {
    cout << " Both numbers are equal";
}
return 0;
}