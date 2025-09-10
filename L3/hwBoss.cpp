#include <iostream>
using namespace std;

//MAKING A BUTTERFLY PATTERN

int main(){

    int n = 4;

    //1st HALF OF BUTTERFLY
    
    for(int i = 0; i<n ; i++){

        //1st QUADRANT OF BUTTERFLY

        for(int j = i+1; j>0 ; j--){

            cout << "*";

        }

        for(int k = n-i-1 ; k>0 ; k--){
            cout << " ";

        }

        //2nd QUADRANT OF BUTTERFLY

        for(int j = n-i-1 ; j>0 ; j-- ){
            cout << " ";

        }

        for(int k = i+1; k>0 ; k--){
            cout << "*";

        }

        cout << endl;

    }

    //2nd Half of butterfly

    for(int i = 0 ; i<n ; i++){

        for(int j = n-i ; j>0 ; j--){
            cout << "*";

        }

        for(int k = 2*i ; k>0 ; k--){
            cout << " ";

        }

        for(int j = n-i ; j>0 ; j--){
            cout << "*";

        }

        cout << endl;

    }

    return 0;

}