//checking if number prime or not

#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n:";
    cin >> n;

    bool isPrime = true;

    for(int i = 2 ; i<n ; i++){

        if(n % i == 0){
            isPrime = false;
            break;
            
        }

    }

    if(isPrime == true){
        cout << "The number is prime";

    }

    if(isPrime == false){
        cout << "The number isnt prime";

    }

}