#include <iostream>
using namespace std;

int main(){

    char str[] = {'a' , 'b' , 'c' , '\0'};
    cout << str << endl;
    
    char str1[] = "hello";
    cout << str1 << endl;

    char str2[100];
    cout << "Enter char2: ";
    cin >> str2;//this normal cin will not include the character after the space 

    cout << str2 << endl;

    
    char str3[12];
    cout << "Enter char3: ";
    cin.getline(str3,12,'$');//this new cin type will include all the characters

    cout << str3 << endl;

    for(char ch : str3){
        cout << ch << " ";

    }
    cout << endl;

    int len = 0;

    for(int i = 0 ; i < str3[i] != '\0' ; i++){
        len++;

    }

    cout << "length of str3 = " << len << endl;

    return 0; 

}