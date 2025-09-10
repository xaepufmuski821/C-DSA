#include <iostream>
using namespace std;

int main(){

    int fac = 1 , n;
    cout << "Enter a no.: ";
    cin >> n;

    for(int i = 1; i<=n; i++){

        fac = fac*i;

    }

    cout << "Factorial of " << n << " is: " << fac;

    return 0;

}