#include <iostream>
using namespace std;

int main(){

    int n = 4 , m = 3;

    for(int  i = 0 ; i<n ; i++){
        
        for(int j = 0 ; j<n-i-1 ; j++){
            cout << " ";
 
        }

        cout << "*";

        if(i!= 0){
            for(int k = 0 ; k<(2*i-1) ; k++ ){
                cout << " ";

            }

            cout << "*";

        }

        cout << endl;


    }

    for(int i = 0 ; i<m ; i++){

        for(int j = 0 ; j<=i ; j++){
            cout << " ";

        }

        cout << "*";

        for(int k = m-2*i ; k>0 ; k--){
            cout<< " ";
            
        }

        if(i!= 2){
            cout << "*";
        }

        cout << endl;

    }

    return 0;

}