#include <iostream>
using namespace std;

int main(){

    int n , x = 0 , pow = 1 ;

    cout << "Enter a binary num: ";
    cin >> n;

    while(n>0){

        int rem = n%10;
        n = n/10;
        x += (rem*pow);
        pow *= 2;

    }

    cout << "The deci num is: " << x;

    return 0;

}