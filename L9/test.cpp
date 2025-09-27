#include <iostream>
#include <vector>

using namespace std;

vector <int> PairSum(vector <int> vec , int target){

    vector <int> ans;

    for(int i = 0 ; i<vec.size() ; i++){
        for(int j = i+1 ; j<vec.size() ; j++){
            if(vec[i] + vec[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
                break;
            }

        }

    }

    return ans;

}

int main() {
    
    vector <int> vec = {1,2,3,4,5};
    int target = 7;

    vector <int> ans = PairSum(vec , target);
    cout << ans[0] << " " << ans[1];

    return 0;  

}