
//Brute approach

// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

#include <iostream>
using namespace std;

int main(){

    int height[] = {1,8,6,2,5,4,8,3,7};

    int size = sizeof(height) / sizeof(int);

    int cntr , maxSize = 0;

    for(int i = 0 ; i < size ; i++){
        for(int j = i+1 ; j < size ; j++){
            int w = (j-i);
            int h = min(height[i] , height[j]);
            cntr = (h * w);
            maxSize = max(cntr , maxSize);

        }

    }

    cout << "Max Water: " << maxSize;

    return 0;

}