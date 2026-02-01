#include <iostream>
#include <vector>
using namespace std;

void sorter(vector <int> &vec){//O(n^2)
    int n = vec.size();

    for(int i = 0 ; i < n - 1 ; i++){
        int smallestIndex = i;
        for(int j = i + 1 ; j < n ; j++){
            if(vec[smallestIndex] > vec[j]){
                smallestIndex = j;

            }

        }

        swap(vec[smallestIndex] , vec[i]);

    }

}

int main(){

    vector <int> vec ={4,1,5,2,3};

    sorter(vec);

    for(int i : vec){
        cout << i << " ";

    }

    return 0;

}