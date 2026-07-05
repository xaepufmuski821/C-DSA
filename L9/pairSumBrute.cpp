//Return a pair in sorted array with target sum
//Brute Force

#include <iostream>
#include <vector>
using namespace std;

vector <int> PairSum(vector <int> &nums , int target){
    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = i+1 ; j < nums.size() ; j++){
            if(nums[i] + nums[j] == target){
                return {nums[i] , nums[j]};

            }

        }

    }

    return {};

}

int main(){

    vector <int> nums = {1,3,2,4};

    int target = 9;

    vector <int> ans = PairSum(nums , target);

    if(!ans.empty()){
        cout << ans[0] << " , " << ans[1];

    }else{
        cout << "no pair was found";

    }
    
    return 0;

 }