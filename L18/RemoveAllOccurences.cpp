#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string str = "daabcbaabcbc";
    string part = "abc";

    // for(int i = 0; i < str.length() ; i++){
    //     int x = str.find(part);

    //     if(x < str.length()){
    //         str.erase(x , part.length());

    //     }

    // }

    while(str.length() > 0 && str.find(part) < str.length()){
        str.erase(str.find(part) , part.length());

    }

    cout << str << endl;

    return 0;

}