#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,2,1,1,3,2,1};
    int n = vec.size();

    int ans = 0;
    int freq = 0;

    //Step 1: we are calculating the candidate which may be a majority element
    for(int i = 0; i < n; i++) {
        if(freq == 0) {
            ans = vec[i];
        }

        if(vec[i] == ans) {
            freq++;
        } else {
            freq--;
        }
    }

    //Step 2: we are verifying if the candidate is an Majority Element or not
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(vec[i] == ans)
            count++;
    }

    if(count > n / 2)
        cout << "Majority element: " << ans;
    else
        cout << "No majority element";

    return 0;
}
