/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]*/

//Optimised approach

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = {1,2,3,4};
    int n = vec.size();
    vector <int> ans(n , 1);

    for(int i = 1 ; i < vec.size() ; i++){
        ans[i] = ans[i - 1] * vec[i - 1];

    }

    int suffix = 1;

    for(int j = vec.size() - 2 ; j >= 0 ; j--){
        suffix *= vec[j + 1];
        ans[j] *= suffix;

    }

    for(int i = 0 ; i < vec.size() ; i++){
        cout << ans[i] << " ";

    }

    return 0;

}