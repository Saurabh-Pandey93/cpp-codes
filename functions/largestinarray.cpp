#include <iostream>
using namespace std;
int main (){
    int arr [] = {7,5,3,2,6};
    int n = sizeof (arr)/sizeof (int);
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if (arr[i]>max)
        {
            max = arr[i];
        }
        
    }
    cout<<"largest="<<max<<endl;
    return 0;
}