#include <iostream>
#include <vector>
using namespace std;

int BinarySeach(vector <int> arr , int target){

    int size = arr.size();
    int start = 0 , end = size - 1;

    while(start <= end){
        int mid = (start + end)/2;

        if(target < arr[mid]){
            end = mid - 1;

        }else if(target > arr[mid]){
            start = mid + 1;

        }else{
            return mid;

        }

    }

    //will return -1 if target is not present in the array;
    return -1;

}

int main(){

    vector <int> arr1 = {-1,0,3,4,5,9,12}; //odd
    vector <int> arr2 = {-1,0,3,5,9,12}; //even

    int target;
    cout << "Enter the target num: ";
    cin >> target;

    cout << "Index of the target: " << BinarySeach(arr1 , target) << endl;
    cout << "Index of the target: " << BinarySeach(arr2 , target) << endl;

    return 0;

}