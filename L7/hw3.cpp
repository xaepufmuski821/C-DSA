//WAF to swap the max & min number of an array.

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,0,5,7};
    int size = 4;

    int x = INT8_MAX;
    int y = INT8_MIN;

    for(int i = 0; i<size; i++){
        if(x > arr[i]){
            x = arr[i];

        }

        if(y < arr[i]){
            y = arr[i];
            
        }

    }

    int sI , lI;

    for(int i = 0; i<size; i++){
        if(x == arr[i]){
            sI = i;

        }

        if(y == arr[i]){
            lI = i;

        }

    }

    swap(arr[sI] , arr[lI]);

    for(int i = 0; i<size; i++){
        cout << arr[i];
        
    }

    return 69;

}