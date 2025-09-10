#include <iostream>
using namespace std;

int main(){

    int n = 4, m = 0;

    for(int i = 0; i<n; i++){

        /*m++;
        can also use m in inner loop instead of i+1*/

        for(int j = 0; j<i+1; j++){
            
            cout << "*";
            
        }
            
        cout << endl;

    }

    return 0;

}