#include <iostream>
using namespace std;

int Sum(int a , int b){

    int s = a+b;

    return s;

}

int min(int a , int b){

    if(a>=b){
        return b;

    } else{
        return a;

    }

}

int main(){

    cout << Sum(10,8) << endl;

    cout << "Min number is: " << min(10,10) << endl;

    return 0;

}