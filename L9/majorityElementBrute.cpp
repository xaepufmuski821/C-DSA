#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = {1,2,2,1,1};
    int n = vec.size();;

    for(int val : vec){
        int freq = 0;
        for(int ele : vec){
            if(ele == val){
                freq++;

            }

        }

        if(freq >= n/2){
            cout << "Majority element: "<<val;
            break;
        }

    }

    return 0;

}