#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter N: ";
    cin >> n;

    while(n>=1){
        n = n >> 1;

        if(n == 2){
            cout << "The number is a power of 2";
            break;
        }else{
            cout << "The number isnt a power of 2";
        }

    }

    return 0;

}
