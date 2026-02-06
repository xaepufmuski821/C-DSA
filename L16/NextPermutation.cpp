#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void HEHE(vector <int> arr , int n){
    int pivot = -1;

    for(int i = n-2 ; i >= 0 ; i--){
        if(arr[i] < arr[i + 1]){
            pivot = i;
            break;

        }

    }

    if(pivot == -1){
        reverse(arr.begin() , arr.end());

    }

    for(int i = n-1 ; i > pivot ; i++){
        if(arr[pivot] < arr[i]){
            swap(arr[pivot] , arr[i]);
            break;

        }

    }

    int i = pivot+1 , j = n-1;

    while(i <= j){
        swap(arr[i] , arr[j]);
        i++;
        j--;
        
    }

    for(int i : arr){
        cout << i << " ";

    }

}

int main(){

    vector <int> arr = {1,2,5,4,3};
    int n = arr.size();

    HEHE(arr , n);

    return 0;

}