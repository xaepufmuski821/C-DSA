#include <iostream>
using namespace std;

int main(){

    int n = 4;

    for(int i = 0; i<n ; i++){

        for(int j = n-i-1; j>0 ; j--){
            cout << " ";


        }

        cout << "*";

        if(i!=0){
            for(int k = 2*i-1; k>0 ; k--){

                cout << " " ;

            }
            cout << "*";
        }

        
        cout << endl;

    }

    for(int i = 0; i<n-1 ; i++){

        for(int j = i+1 ; j>0 ; j--){
            cout << " " ;

        }

        cout << "*";

        if(i!=2){
            for(int k = n-2*i-1; k>0 ; k--){
                cout << " ";

            }

            cout << "*";

        }

        cout << endl;

    }

    return 0;

}