#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector <int> arr , int n , int max , int m){
    int print = 0 , painters = 1;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            return false;

        }

        if(print + arr[i] <= max){
            print += arr[i];

        }else if(print + arr[i] > max){
            painters++;
            print = arr[i];
        }

    }

    if(m >= painters){
        return true;

    }else{
        return false;

    }

}

int Ans(vector <int> arr , int n , int m){
    int st = INT16_MIN , end = 0 , ans;
    for(int i = 0 ; i < n ; i++){
        end += arr[i];
        st = max(st, arr[i]);

    }

    while(st <= end){
        int mid = st + (end - st)/2;

        if(isValid(arr , n , mid , m) == true){    
            ans = mid;
            end = mid - 1;

        }else{
            st = mid + 1;

        }

    }

    return ans;

}

int main(){

    vector <int> arr = {40,30,10,20};
    int n = 4 , m = 2;

    cout << Ans(arr , n , m);

    return 0;

}