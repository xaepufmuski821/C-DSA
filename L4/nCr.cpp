#include <iostream>
using namespace std;

int factorial(int n){

    int fact = 1;

    for(int i = 1 ; i<=n ; i++){
        fact = fact*i;

    }

    return fact;

}

int nCr(int n , int r){

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    int NCR = fact_n/(fact_r*fact_nmr);

    return NCR;

}

int main(){

    cout << nCr(5,2);  

}