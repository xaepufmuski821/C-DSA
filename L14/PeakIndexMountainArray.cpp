#include <iostream>
#include <vector>
using namespace std;

int PeakMountainIndex(vector <int> &nums){
    int st = 1 , end = nums.size() - 2;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(nums[mid-1] < nums[mid] && nums[mid] < nums[mid+1]){
            st = mid + 1;

        }else if(nums[mid-1] > nums[mid]){
            end = mid - 1;

        }else{
            return mid;

        }

    }

    return -1;

}

int main(){

    vector <int> nums = {1,2,3,4,3,0};

    cout << PeakMountainIndex(nums);

    return 0;

}