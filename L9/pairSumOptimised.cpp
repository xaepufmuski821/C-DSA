#include <iostream>
#include <vector>
using namespace std;

vector <int> PairSumCalc(vector <int> vec , int target){

    vector <int> ans;
    int i = 0 , j = vec.size() - 1;

    while(i<j){
        if(vec[i] + vec[j] == target){
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);

            return ans;
            break;

        }

        if(vec[i] + vec[j] < target){
            i++;
        }

        if(vec[i] + vec[j] > target){
            j--;
        }

    }

    return ans;

}

int main(){

    vector <int> vec = {1,2,3,4,5};
    int n = 5;
    int target = 9;

    vector <int> ans = PairSumCalc(vec,target);
    cout << ans[0] << " " << ans[1];

    return 0;

}