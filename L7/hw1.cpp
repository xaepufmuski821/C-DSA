//HW is to print the index of the largest and smallest number in any array

#include <iostream>
using namespace std;

int main(){

    int nums[4] = {15 , 1 , -69 , 14};

    int x = INT8_MAX;

    int y = INT8_MIN;
    
    for(int i = 0; i<4; i++){
        x = min(x,nums[i]);

    }

    cout << "Smallest number is: " << x << endl;

    for(int i = 0; i<4; i++){
        y = max(y,nums[i]);

    }

    cout << "largest number is: " << y << endl;

    for(int i = 0; i<4; i++){
        if(nums[i] == x){
            cout << "The Index of the Smallest: " << i << endl;

        }

        if(nums[i] == y){
            cout << "The Index of the Largest: " << i << endl;

        }
    }

    return 69;

}
