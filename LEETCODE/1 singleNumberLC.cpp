/*Given a non-empty array of integers nums, every element appears twice except for one.
Find that single one. You must implement a solution with a linear runtime complexity(means only 1 loop)
 and use only constant extra space(can only create single variables).*/

//a vector is an array too

#include <iostream>
#include <vector>
using namespace std;

int singleNum(vector <int> &nums){

    int ans = 0;
    for(int val : nums){
        ans ^= val;

    }

    return ans;

}


int main(){

    vector <int> nums = {4,1,2,1,2};
    cout << singleNum(nums);

    return 0;
    
}