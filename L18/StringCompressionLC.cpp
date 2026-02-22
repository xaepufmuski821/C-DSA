#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector <char> chars = {'a','a','b','b','c','c','c'};
    int n = chars.size();
    int idx = 0;

    for(int i = 0 ; i < n ; i++){
        int count = 0;
        char ch = chars[i];

        while(i < n && chars[i] == ch){
            count++;
            i++;
        }

        if(count == 1){
            chars[idx++] = ch;

        }else{
            chars[idx++] = ch;
            string st = to_string(count);
            for(char dig : st){
                chars[idx++] = dig;

            }

        }

        i--;

    }

    chars.resize(idx);

    for(char st : chars){
            cout << st << " ";

    }

    return 0;

}