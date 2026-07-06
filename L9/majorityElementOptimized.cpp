//To find the most repeted element in a array/vector
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int MajorityElement(vector <int> &nums){
    int count = 1 , ref = nums.size() / 2;
    
    sort(nums.begin() , nums.end());

    for(int i = 1 ; i < nums.size() ; i++){       
        if(nums[i] == nums[i-1]){
            count ++;

        }else if(nums[i] != nums[i-1]){
            count = 1;

        }

        if(count > ref){
            return nums[i-1];

        }

    }

    return nums[0];

}

int main(){

    vector <int> nums = {3,2,3};

    cout << MajorityElement(nums);

    return 0;

}