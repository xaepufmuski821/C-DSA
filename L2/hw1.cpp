//sum of all the even numbers till n

#include <iostream>
using namespace std;

int main(){

    int n , sum = 0;
    cout << "Enter n: ";
    cin >> n;

    for(int i=1; i<=n; i++){

        if(i%2==0){

            sum+=i;

        }

    }

    cout << "SUM: " << sum;

    return 0;

}