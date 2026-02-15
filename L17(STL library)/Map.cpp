#include <iostream>
#include <map>
using namespace std;

int main(){

    map <string , int> m;
    
    m["tv"] = 50;
    m["laptop"] = 100;
    m["headphones"] = 150;

    m.emplace("mouse" , 75);

    for(auto p : m){ // here the map is getting printed wrt to the ascending order of the keys!!
        cout << p.first << ": " << p.second << endl;

    }

    return 0;

}