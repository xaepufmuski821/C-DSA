#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector <int> nums , int n , int c , int Dist){
    sort(nums.begin() , nums.end());
    int pos = nums[0] , cows = 1;

    for(int i = 0 ; i < n ; i++){
        if( nums[i] - pos >= Dist){
            cows++;
            pos = nums[i];

        }

    }
    
    if(cows >= c){
        return true;

    }else{
        return false;

    }

}

int MaxDistChecker(vector <int> nums , int n , int c){
    int st = 1 , end = nums[n-1] - nums[0] , ans = -1;

    for(int i = 0 ; i < n ; i++){
        st = min(st , nums[i]);
        end = max(end , nums[i]);

    }

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isValid(nums , n , c , mid)){
            ans = mid;
            st = mid + 1;

        }else{
            end = mid - 1;

        }

    }

    return ans;

}

int main(){

    vector <int> nums = {1, 3, 4, 7, 10, 15};
    int n = nums.size() , c = 4;

    cout << MaxDistChecker(nums , n , c);

    return 0;

}