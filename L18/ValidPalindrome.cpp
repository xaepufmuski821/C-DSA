#include <iostream>
#include <string>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
        return true;

    }

    return false;

}

int main(){

    string str = "Ac3?e3c&a";
    int st = 0 , end = str.length() - 1;

    while(st <= end){
        if(!isAlphaNum(str[st])){
          st++;
          continue; 

        }

        if(!isAlphaNum(str[end])){
          end--;
          continue; 
           
        }

        if(tolower(str[st]) == tolower(str[end])){
            st++;
            end--;

        }else{
            cout << "The String isnt Palindrome" << endl; 
            break;
        }

    }

    cout << "The string is Palindrome";

    return 0;

}