#include <iostream>
using namespace std;

void arrDoubler(int funcArr[] , int size){
    cout << "FUNCTION" << endl;
    for(int i = 0; i<size; i++){
        funcArr[i] *= 2;

    }

}

int main(){

    int mainArray[] = {2,4,6};
    int size = 3;

    arrDoubler(mainArray , size);

    cout << "MAIN FUCTION" << endl;

    for(int i = 0; i<size; i++){
        cout << mainArray[i] << endl;

    }

    return 69;
}