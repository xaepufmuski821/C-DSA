#include <iostream>
using namespace std;

 int fac(int n){

    int F = 1;

    for(int i = 1 ; i<=n ; i++){
        F = F*i;

    }

    return F;

 }

 int main(){

    cout << "Factorial: " << fac(4);

    return 0;

 }