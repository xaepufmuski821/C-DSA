#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int *ptr = &a;

    cout << &a << endl;
    cout << ptr << endl;

    // pointer to pointer
    int ** parentPtr = &ptr;
    cout << &ptr << endl;
    cout << parentPtr << endl;

    //derefernce operator
    cout << *ptr << endl;
    cout << **parentPtr << endl;

    return 0;

}