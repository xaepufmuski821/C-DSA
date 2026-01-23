#include <iostream>
using namespace std;


//Pass By pointer
int func1(int *ptr){
    *ptr = 20;
    return *ptr;

}

//Pass by reference(alias)
int func2(int &c){
    c = 30;
    return c;

}

int main(){

    int a = 10;
    func1(&a);

    cout << a << endl; 

    int b = 20;
    func2(b);

    cout << b << endl;

    return 0;

}