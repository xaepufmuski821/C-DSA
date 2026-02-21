#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str = "infer"; 

    int st = 0 , end = str.length() - 1;

    while(st < end){
        swap(str[st] , str[end]);
        st++;
        end--;

    }

    cout << str << endl;

    //2nd method

    string str2 = "ola";
    
    reverse(str2.begin() , str2.end());

    cout << str2;

    return 0;

}