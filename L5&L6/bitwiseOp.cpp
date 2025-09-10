#include <iostream>
using namespace std;

void AND(){

    int a = 4 , b = 5;
    cout << (a & b) << endl;

}

void OR(){

    int a = 4 , b = 5;
    cout << (a | b)<< endl; 

}

void XOR(){

    int a = 4 , b = 5;
    cout << (a ^ b)<< endl;

}

void LEFTSHIFTOP(){

    int a = 4;
    cout << (a << 1) << endl;
    cout << (10<<2) << endl;

}

void RIGHTSHIFTOP(){

    int a = 4;
    cout << (a >> 1) << endl;
    cout << (10>>2) << endl;

}

int main(){

    AND();
    OR();
    XOR();
    LEFTSHIFTOP();
    RIGHTSHIFTOP();

    return 0;

}