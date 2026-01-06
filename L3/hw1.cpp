#include <iostream>
using namespace std;

int main(){

    int n = 4 , m = 0;

    char ch = 'A';

    for(int i = 1 ; i<=n ; i++){
        m++;
        for(int j = 1 ; j<=m ; j++){
            cout << ch << ' ';
            
        }   
        ch = ch + 1;
        cout << endl;

    }

}