//to print all the prime numbers coming before that number

#include <iostream>
using namespace std;

int CHECKPRIME(int n){

    bool IsPrime = true;

    for(int i = 2 ; i<n ; i++){

        if(n%i == 0){
           IsPrime = false;
        }

    }

    if(IsPrime == true){
            cout << n << " " ;
            

        }

    return 0;

}

int PUTPRIME(int n){
    
   for(int i = 2 ; i<=n ; i++){
     CHECKPRIME(i);

   }

}

int main(){
    PUTPRIME(15);
    return 0;

}