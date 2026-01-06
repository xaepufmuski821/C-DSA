//To calculate if a number is prime or not

#include <iostream>
using namespace std;

int main(){
    
    int n;
    bool isPrime = true;
    cout << "Enter n: ";
    cin >> n;

    for(int i=2; i<=(n-1); i++){

        if(n%i==0){
        
            isPrime = false;
            break;
            
        }

    }

    if(isPrime == true){
            cout << "Its is Prime number\n";
    } else{
            cout << "Its a non-Prime\n";
    }

    return 0;

}