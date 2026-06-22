//Return a pair in sorted array with target sum

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> PairSum(vector <int> &nums , int target){
    
    int st = 0 , end = nums.size()-1;   

    while(st < end){
        int pairSum = nums[st] + nums[end];

        if(pairSum == target){
            return {nums[st],nums[end]};

        }else if(pairSum < target){
            st++;

        }else if(pairSum > target){
            end--;

        }

    }

    return {};

}

int main(){

    vector <int> nums = {1,3,2,4,5};

    int target = 9;

    sort(nums.begin() , nums.end());

    vector <int> ans = PairSum(nums , target);

    if (!ans.empty()) {
        cout << ans[0] << " , " << ans[1];
    } else {
        cout << "No pair found";
    }

    return 0;

}