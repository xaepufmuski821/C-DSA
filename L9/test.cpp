//to print the subarray whose sum is equal to target

#include <iostream>
#include <vector>
using namespace std;

vector <int> PairSum(vector <int> nums , int target){

    vector <int> ans;
    int i = 0 , j = nums.size() - 1;

    while(i<j){
        if(nums[i] + nums[j] == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
            break;

        }

        if(nums[i] + nums[j] > target){
            j--;

        }

        if(nums[i] + nums[j] < target){
            i++;

        }

    }

    return ans;

}

int main (){

    vector <int> nums = {1,2,3,4,5};
    int target = 9;

    vector <int> ans = PairSum(nums , target);
    cout << ans[0] << " " << ans[1];

    return 0;

}