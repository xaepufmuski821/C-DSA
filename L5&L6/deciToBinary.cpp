#include <iostream>
using namespace std;

int main(){

    int n , x = 0 , pow = 1 , rem;

    cout << "Enter n: ";
    cin >> n ;

    while(n>0){
        rem = n%2;
        n = n/2;
        x += rem*pow;
        pow *= 10;

    }

    cout << "here: " << x;

    return 0;

}