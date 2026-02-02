#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void brute(vector <int> vec){
    sort(vec.begin() , vec.end());

    for(int i : vec){
        cout << i << " ";

    }

}

void optimised(vector <int> vec){

    int n = vec.size() , zeros = 0 , ones = 0 , twos = 0;

    for(int i : vec){
        if(i == 1)ones++;
        else if(i == 2)twos++;
        else zeros++;

    }

    int pos = 0;

    for(int i = 0 ; i < zeros ; i++){
        vec[pos] = 0;
        pos++;

    }

    for(int i = 0 ; i < ones ; i++){
        vec[pos] = 1;
        pos++;

    }

    for(int i = 0 ; i < twos ; i++){
        vec[pos] = 2;
        pos++;

    }

    for(int i : vec){
        cout << i << " ";

    }

}

void optimal(vector <int> vec){//Dutch National Flag Algorithm
    int low = 0 , mid = 0 , high = vec.size() - 1;

    while(mid <= high){
        if(vec[mid] == 0){
            swap(vec[mid] , vec[low]);
            low++;
            mid++;

        }else if(vec[mid] == 1){
            mid++;

        }else{
            swap(vec[mid] , vec[high]);
            high--;

        }

    }

    for(int i : vec){
        cout << i << " ";

    }

}

int main(){

    vector <int> vec = {2,0,2,1,1,0,1,2,0,0};

    brute(vec);

    cout << endl;

    optimised(vec);

    cout << endl;

    optimal(vec);

    return 0;

}