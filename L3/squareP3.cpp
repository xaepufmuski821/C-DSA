#include <iostream>
using namespace std;

int main(){

    int n = 3;
    int m = 1;

    for(int i = 0; i<n; i++){
        
        for(int j = 0; j<n; j++){
            cout << m << " ";
            m++;

        }

        cout << endl;

    }

    return 0;

}