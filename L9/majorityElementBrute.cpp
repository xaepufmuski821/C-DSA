//To find the most repeted element in a array/vector
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = {1,2,2,1,1};
    int n = vec.size();

    for(int val : vec){
        int freq = 0;
        for(int ele : vec){
            if(ele == val){
                freq++;

            }

        }

        if(freq >= n/2){
            cout << "Majority element: " << val;
            break;
        }

    }

    return 0;

}