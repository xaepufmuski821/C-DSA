//best way to perform the majority element operation.(MOST OPTIMIZED)

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector <int> vec = {1,2,2,1,1,3,2,1};
    int n = vec.size();
    int ans = vec[0];
    int freq = 0;

    for(int i = 0 ; i<n ; i++){
        if(ans == 0){
            ans = vec[i];

        }
        
        if(ans == vec[i]){
            freq++;

        }
        else{
            freq--;

        }

    }

    cout << "majority element: " << ans;

    return 0;

}