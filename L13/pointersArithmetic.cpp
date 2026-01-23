#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;

    ptr++;
    cout << ptr << endl;

    ptr += 2;
    cout << ptr << endl;

    int *ptr1;
    int *ptr2 = ptr1 + 2;

    //will print 2 bytes space gap
    cout << ptr2 - ptr1 << endl;

    return 0;

}