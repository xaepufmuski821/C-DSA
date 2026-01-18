//To calculate x^n in an optimised way

#include <iostream>
using namespace std;

int powCal(int x , int n){
    long binForm = n;
    int ans = 1;

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