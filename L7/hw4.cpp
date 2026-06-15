//To print all the unique values in an array.

#include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,1,2,4,5,3};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i < size ; i++){
        bool isUnique = true;
        
        for(int j = 0 ; j < size ; j++){
            if(i != j && arr[i] == arr[j]){
                isUnique = false;

            }

        }

        if(isUnique){
            cout << arr[i] << " ";

        }

    }    

    return 0;

}