//To reverse an array

#include <iostream>
using namespace std;

int main(){

    int arr[] = {4,2,7,8,2,1,5};
    int size = 7;

    int start = 0;
    int end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }

    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";

    }

    return 0 ;

}