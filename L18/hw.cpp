#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str){

    string str1 = str;

    reverse(str1.begin() , str1.end());

    if(str1 == str){
        return true;

    }

    return false;

}

int main(){

    string str;
    cout << "Enter string: ";
    getline(cin , str);

    cout << isPalindrome(str) << endl;

    return 0;

}