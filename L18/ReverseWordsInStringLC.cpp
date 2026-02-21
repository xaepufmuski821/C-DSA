#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str = "hola amigo";
    string ans = " ";
    int n = str.length();
    cout << str << endl;

    reverse(str.begin() , str.end());

    for(int i = 0 ; i<n ; i++){
        string word = "";

        while(str[i] != ' ' && i < n){
            word += str[i];
            i++;
        }

        reverse(word.begin() , word.end());

        if(word.length() > 0){
            ans += " " + word;

        }

    }

    cout << ans.substr(1);

    return 0;

}