#include <iostream>
#include <vector>
using namespace std;

void sorter(vector <int> &vec){//O(n^2)
    int n = vec.size();

    for(int i = 1 ; i < n ; i++){
        int curr = vec[i];
        int prev = i - 1;

        while(prev >= 0 && vec[prev] > curr){
            vec[prev + 1] = vec[prev];
            prev--;

        }

        vec[prev + 1] = curr;

    }

}

int main(){

    vector <int> vec = {4,1,5,2,3};

    sorter(vec);
    
    for(int i : vec){
        cout << i << " ";

    }

    return 0;

}