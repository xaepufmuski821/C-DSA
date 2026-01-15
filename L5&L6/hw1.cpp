//To check if a number is a power of 2 or not
#include <iostream>
using namespace std;

int main(){

    int n;
    bool ISPOWER = true;

    cout << "Enter n: ";
    cin >> n;

    while(n>=2){
        
        if(n % 2 != 0){
            ISPOWER = false;
            break;
        }

        n = n/2;

    }

     if(n<=0){
        cout << "the number is less than 2 u dumbo" << endl;
        ISPOWER = false;
    }

    if(ISPOWER == true){
        cout << "The number is a power of 2" << endl;

    }

    if(ISPOWER == false){
        cout << "The number isnt a power of 2" << endl;

    }

    return 0;

}