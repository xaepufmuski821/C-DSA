#include <iostream>
using namespace std;

void CHECKPRIME(int n){

    for(int i = 2 ; i<n ; i++){

        if(n%i == 0){
            cout << "The number isn't Prime";
            break;
        }else{
            cout << "It is a Prime Number";
            break;
        }

        

    }

}

int main(){

    CHECKPRIME(11);
    return 0;

}