#include <iostream>
#include <vector>
using namespace std;

int SingleNonDuplicate(vector <int> &nums){
    int st = 0 , end = nums.size() - 1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(st == end){
            return nums[mid];

        }else if(nums[mid- 1] < nums[mid] && nums[mid] < nums[mid + 1]){
            return nums[mid];

        }

        if(nums[mid] == nums[mid - 1]){
            if((end - mid) % 2 == 0){
                end = mid - 2;

            }else{
                st = mid + 1;

            }

        }else if(nums[mid] == nums[mid + 1]){
            if((mid - st) % 2 == 0){
                st = mid + 2;

            }else{
                end = mid - 1;

            }

        }

    }

    return -1;

}

int main(){

    vector <int> nums = {1,1,2,3,3,4,4,8,8};

    cout << SingleNonDuplicate(nums);

    return 0;

}