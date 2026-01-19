
// 2 pointer approach

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector <int> height){
    
    int lM = 0 , rM = height.size() - 1 , maxWater = 0;

    while(lM < rM){
        int width = rM - lM;
        int h = min(height[lM] , height[rM]);
        
        int currArea = width * h;

        maxWater = max(maxWater , currArea);

        height[lM] < height[rM] ? lM++ : rM--;

    }

    return maxWater;

}

int main(){

    vector <int > height = {1,8,6,2,5,4,8,3,7};

    cout << maxArea(height);

    return 0;

}