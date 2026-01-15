//To print all the unique values in an array.

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,1,2,4,5,3};
    int size = 8;

    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[j] == arr[i]){
               arr[i] = 0;
               arr[j] = 0;

            }

        }

    }

    for(int i = 0; i<size; i++){
        if(arr[i] > 0){
            cout << arr[i] << " ";

        }

    }

    return 69;

}