#include <iostream>
using namespace std;

int sumDigits(int num){

    int sum = 0;

    while(num>0){

        int x = num % 10;
        num /=10;

        sum += x;

    }

   return sum;

}

int main(){

    cout << "Sum: " << sumDigits(12345);
    return 0;

}