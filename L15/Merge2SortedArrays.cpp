#include <iostream>
using namespace std;

int main(){

    int A[] = {1,2,3,0,0,0};
    int B[] = {2,5,6};
    int m = 3 , n = 3;

    int idx = m+n-1 , i = m-1 , j = n-1;
    
    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
            A[idx] = A[i];
            idx--;
            i--;

        }else{
            A[idx] = B[j]; 
            idx--;
            j--;

        }

    }

    while(j >= 0){
        A[idx] = B[j];
        idx--;
        j--; 

    }

    for(int i = 0 ; i < 6 ; i++){
        cout << A[i] << " ";

    }

    return 0;

}