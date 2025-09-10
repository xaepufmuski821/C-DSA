//WAF to calculate sum & product of all numbers in an array.

#include <iostream>
using namespace std;

void SumProduct(int nums[] , int size){

    int sum = 0;
    int product = 1;

    for(int i = 0; i<size; i++){
        sum += nums[i];
        product *= nums[i];
    }

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

}

int main(){

    int nums[] = {1,2,3,4};
    int size = 4;

    SumProduct(nums , size);

    return 69;

}