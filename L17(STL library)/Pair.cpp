#include <iostream>
#include <vector>
using namespace std;

int main(){

    pair <int , string> p = {1,"hehe"};
    cout << p.first << endl;    
    cout << p.second << endl;

    cout << endl;

    //pair inside pair
    pair <int , pair <int , string>> p1 = {3 , {1,"hola amigo"}};
    cout << p1.first << endl;
    cout << p1.second.first << endl;
    cout << p1.second.second << endl;

    //pair inside vector

    

    return 0;

}