//To print intersection of 2 arrays

#include <iostream>
using namespace std;

int main(){

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {6,7,1,2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]); 

    for(int i = 0; i < size1; i++) {

        bool alreadyPrinted = false;

        //This loops check if we have already dealt with the current (i)th value; 
        //Helps us skip same values so that it doenst get printed again
        for(int k = 0; k < i; k++) {
            if(arr1[k] == arr1[i]) {
                alreadyPrinted = true;
                break;
                
            }

        }

        if(alreadyPrinted) {
            continue;

        }

        for(int j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }

        }

    }

    return 0;

}