#include <iostream>
using namespace std;

int Sum(int a, int b){

    cout << "Mic check 123 123 " << endl;

    return a+b;

}

int main(){

    int x , y;

    cout << "Enter 2 numbers: " ;
    cin >> x >> y;

    cout << "Sum: "<< Sum(x,y);

    return 0;

}
