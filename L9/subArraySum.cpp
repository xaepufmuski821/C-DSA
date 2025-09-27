#include <iostream>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5};
    int n = 5;

    for(int st = 0 ; st<n ; st++){
        cout << endl; 
        for(int end = st ; end<n ; end++){
            cout << " ";
            for(int i = st; i<=end ;i++){
                cout << arr[i];

            }

        }

    }

    return 0;

}