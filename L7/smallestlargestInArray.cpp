//To find the smallest and the largest number in an array

#include <iostream>
using namespace std;

int main(){

    int nums[4] = {15 , 1 , -69 , 14};

    int x = INT8_MAX;

    int y = INT8_MIN;
    
    for(int i = 0; i<4; i++){

    // 1st way to push smallest num in x
        /*if(nums[i] < x){
            x = nums[i];

        }*/

    // 2nd way to push smallest num in x (MORE EFFICIENT)
        x = min(x,nums[i]);

    }

    cout << "Smallest number is: " << x << endl;

    for(int i = 0; i<4; i++){

    // 1st way to push largest num in y
        /*if(nums[i] > y){
            y = nums[i];

        }*/

    // 2nd way to push largest num in y (MORE EFFICIENT)
        y = max(y,nums[i]);

    }

    cout << "largest number is: " << y << endl;

    return 69;

}
