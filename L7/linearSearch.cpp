#include <iostream>
using namespace std;

int linearSearch(int nums[] , int size){

    int targetnum = 8;

    for(int i = 0; i<size; i++){
        if(targetnum == nums[i]){
            cout << "The index of the targetnum is: ";
            return i; //found the index
        }

    }

    return -1; //didnt found the index = the number doesnt exist

}

int main(){

    int arr[] = {4,2,7,8,1,2,5};

    cout << linearSearch(arr , 7) << endl;

    return 69;

}