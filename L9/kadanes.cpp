//Given an integer array nums, find the subarray with the largest sum, and return its sum.
//optimized way of maxSubarraySum.

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;
    int sum = 0,maxSum = INT8_MIN;

    for(int i = 0 ; i<n ; i++){
        sum += arr[i];
        maxSum = max(maxSum , sum);
        if(sum<0){
            sum = 0;

        }

    }

    cout << maxSum;

    return 0;

}