#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = {2,2,1,1,1,1};
    int n = vec.size();

   // vector <int> sort(vec.begin() , vec.end());

    int freq = 1 ; int ans = vec[0];

    for(int i = 1 ; i < n ; i++){
        if(vec[i] == vec[i-1]){
            freq++;

        }else{
             freq = 1;
             ans = vec[i];

        }

        if(freq >= n/2){
            cout << "majority element: " << vec[i];
            break;
        }

    }

    return 0;

}