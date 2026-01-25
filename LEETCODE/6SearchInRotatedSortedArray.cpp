#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> arr = {6,7,0,1,2,3,4,5};
    int st = 0 , end = arr.size() - 1;

    int tar;
    cout << "Enter Target: ";
    cin >> tar;

    while(st <= end){

        int mid = st + (end-st)/2;

        if(arr[mid] == tar){
            cout << "Index: " << mid;
            break;
        }

        if(arr[st] <= arr[mid]){ // Left Sorted Array
            if(arr[st] <= tar && tar <= arr[mid]){
                end = mid - 1;

            }else{
                st = mid + 1;

            }

        }else{ //Right Sorted Array
            if(arr[mid] <= tar && tar <= arr[end]){
                st = mid + 1;

            }else{
                end = mid - 1;

            }

        }

    }

    return 0;

}