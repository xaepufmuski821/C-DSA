#include <iostream>
using namespace std;

int main(){

    int n = 68 , m;
    char ch = 'A';

    for(int i = 64 ; i<n ; i++){    

        for(char ch = i+1 ; ch > 64; ch--){
            cout << ch << " ";

        }

        cout << endl;


    }

    return 0;

}