#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> arr = {3,3,7,7,10,10,11,11,12};
    int st = 0 , end = arr.size() - 1;

    while(st <= end){
        int mid = st + (end - st)/2;

        if(arr[0] != arr[1]){
            cout << arr[0];
            break;
        }

        if(arr[arr.size() - 1] != arr[arr.size() - 2]){
            cout << arr[arr.size() - 1];
            break;
        }

        if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){
            cout << arr[mid];
            break;
        }

        if(arr[mid] % 2 == 0){
            if(arr[mid] == arr[mid - 1]){
                end = mid - 1;

            }else if(arr[mid] = arr[mid + 1]){
                st = mid + 1;

            }


        }else if(arr[mid] % 2 != 0){
            if(arr[mid] == arr[mid - 1]){
                st = mid + 1;

            }else if(arr[mid] == arr[mid + 1]){
                end = mid - 1;

            }

        }
    }

    return 0;

}