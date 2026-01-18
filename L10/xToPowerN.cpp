//To calculate x^n in an optimised way

#include <iostream>
using namespace std;

int powCal(int x , int n){
    //These all are corner cases
    if(n == 0) return 1;
    if(x == 0) return 0;
    if(n == 1) return x;
    if(x == 1) return 1;
    if(x == -1 && n%2 == 0) return 1;
    if(x == -1 && n%2 != 0) return -1;

    long binForm = n;

    //If n is -ve
    if(binForm < 0){
        x = 1/x;
        binForm = -binForm;

    }

    int ans = 1;

    //Main code
    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;

        }

        x = x*x;
        binForm /= 2;

    }

    return ans;

}

int main(){

    int x , n;

    cout << "Enter x: ";
    cin >> x;

    cout << "Enter n: ";
    cin >> n;

    cout << powCal(x , n);

    return 0;

}