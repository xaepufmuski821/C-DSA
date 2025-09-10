#include <iostream>
using namespace std;

int main(){

    int n = 5;

     for(int i = 0 ; i<n ; i++){

        for(int j = 1; j <= n-i-1 ; j++){
            cout << " ";

        }

        for(int k = 1 ; k <= i+1 ; k++){
            cout << k ;

        }

        for(int h = i; h>=1  ; h--){
            cout << h ;
        
        }

        cout << endl;

     }

    return 0;
}