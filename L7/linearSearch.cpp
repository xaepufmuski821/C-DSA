//To locate the index of the a specific number provided by the user

#include <iostream>
using namespace std;

int linearSearch(int nums[] , int size){

    int targetnum = 8;

    for(int i = 0; i<size; i++){
        if(targetnum == nums[i]){
            cout << "The index of the target num is: ";
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