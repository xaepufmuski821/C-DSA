#include <iostream>
#include <vector>
using namespace std;

void sorter(vector <int> &vec){//O(n^2)
    int n = vec.size();

    for(int i = 0 ; i < n - 1 ; i++){
        bool isSwap = false;//Optimisation on bubble sort

        for(int j = 0 ; j < n-i-1 ; j++){
            if(vec[j] > vec[j + 1]){
                swap(vec[j] , vec[j + 1]);
                isSwap = true;
            }

        }

        if(isSwap == false){ // this means that array is already sorted
            return;

        }

    }

    for(int i : vec){
        cout << i << " ";

    }

}

int main(){

    vector <int> arr = {4,1,5,2,3};

    sorter(arr);

    return 0;

}