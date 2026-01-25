#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> arr = {1,2,3,4,1,0};
    int st = 1 , end = arr.size() - 2;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
            cout << "The Index of peak : " << mid;
            break;
        }   

        if(arr[mid - 1] < arr[mid]){
            st = mid + 1;

        }else{
            end = mid - 1;

        }

    }

    return 0;

}