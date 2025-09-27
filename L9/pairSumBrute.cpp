#include <iostream>
#include <vector>
using namespace std;

vector <int> PairCalc(vector <int> nums , int target){

    int n = nums.size();
    vector <int> ans;

    for(int i = 0; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);

                return ans;
            }

        }

    }

    return ans;

}

int main(){

    vector <int> nums = {1,2,3,4,5};
    int targetNum = 9;

    vector<int> ans = PairCalc(nums , targetNum);

    cout << ans[0] << "," << ans[1];

    return 0;

}