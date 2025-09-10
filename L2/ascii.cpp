#include <iostream>
using namespace std;

int main(){

    char ch;
    cout << "Enter your char: "; 
    cin >> ch;

    if(ch>= 65 && ch<= 90){
        cout << "its a uppercase character\n";
    }else{
        cout << "its a lowercase character\n";
    }

    return 0 ;

}