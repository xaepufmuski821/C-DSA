#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector <int> arr , int n , int c , int Dist){
    sort(arr.begin() , arr.end());
    int pos = arr[0] , cows = 1;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] - pos >= Dist){
            cows++;
            pos = arr[i];
        }

    }

    if(cows == c){
        return true;
            
    }else{
        return false;

    }

}

int Ans(vector <int> arr , int n , int c){
    int st = INT16_MAX , end = INT16_MIN , ans;
    for(int i = 0 ; i < n ; i++){
        end = max(end , arr[i]);
        st = min(st , arr[i]);
    }

    while(st <= end){
        int mid = st + (end - st)/2;
        if(isValid(arr , n , c , mid)){
            ans = mid;
            st = mid + 1;

        }else{
            end = mid - 1;

        }

    }

    return ans;

}

int main(){

    vector <int> arr = {1,2,8,4,9};
    int n = arr.size() , c = 3;

    cout << Ans(arr , n , c);

    return 0;

}