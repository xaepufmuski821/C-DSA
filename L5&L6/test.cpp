#include <iostream>
using namespace std;

int main(){

    int n;
    bool isPow = true;

    cout << "Enter n: ";
    cin >> n;

    /*if(n<2){
        isPow = false;

    }*/

    while(n>=2){
        if(n%2 != 0){
            isPow = false;
            break;
        }

        n = n/2;

    }

    if(isPow == true){
        cout << "The Number is a Power of 2";

    }

    if(isPow == false){
        cout << "The number isnt power of 2";

    }    

    return 0;

}