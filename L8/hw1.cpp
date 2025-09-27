//Linear Search in a vector

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int x;
    cout << "Enter a number for which u want to linear search: ";
    cin >> x;

    vector <int> nums = {1,2,3,4,5,6};

    for(int i : nums){
        if(i == x){
            x = i;

        }

    }

    for(int i = 0 ; i<6 ;i++){
        if(nums[i] == x){
            cout << "The index of the target number is: " << i;

        }

    }

    return 0;

}