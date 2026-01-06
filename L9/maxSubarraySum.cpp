#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int n = 5;
    int maxSum = INT8_MIN;

    for(int st = 0 ; st<n ; st++){
        int sum = 0;
        for(int end = st ; end<n ; end++){
            sum += arr[end];
            maxSum = max(sum,maxSum);
        }

    }

    cout << maxSum;

    return 0;

} 