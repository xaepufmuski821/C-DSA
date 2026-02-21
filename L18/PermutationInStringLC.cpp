#include <iostream>
#include <string>
using namespace std;

bool isFreqSame(int freq[] , int winFreq[]){
    for(int i = 0 ; i < 26 ; i++){
        if(freq[i] != winFreq[i]){
            return false;

        }

    }

    return true;

}

bool permutationChecker(string s1 , string s2){
     int freq[26] = {0};
    
    for(int i = 0 ; i < s1.length() ; i++){
        freq[s1[i] - 'a']++;

    }

    int winSize = s1.length();

    for(int i = 0 ; i < s2.length() ; i++){
        int windIdx = 0 , idx = i;
        int winFreq[26] = {0};

        while(windIdx < winSize && idx < s2.length()){
            winFreq[s2[idx] - 'a']++;
            windIdx++; idx++;

        }

        if(isFreqSame(freq , winFreq)){
            return true;

        }

    }

    return false;

}

int main(){

    string s1 = "ab";
    string s2 = "eidabooo";
     
    cout << permutationChecker(s1 , s2) << endl;

    return 0;

}