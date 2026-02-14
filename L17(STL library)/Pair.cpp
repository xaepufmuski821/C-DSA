#include <iostream>
#include <vector>
using namespace std;

int main(){

    // pair <int , string> p = {1,"hehe"};
    // cout << p.first << endl;    
    // cout << p.second << endl;

    // cout << endl;

    // //pair inside pair
    // pair <int , pair <int , string>> p1 = {3 , {1,"hola amigo"}};
    // cout << p1.first << endl;
    // cout << p1.second.first << endl;
    // cout << p1.second.second << endl;

    //pair inside vector

    vector <pair <int , int>> vec = {{1,2} , {3,4}};

    vec.push_back({5,6}); //just inserts the object
    vec.emplace_back(7,8); //it creats the object automatically and then inserts it

    for(auto p : vec){
        cout << p.first << " " << p.second << endl;

    }

    return 0;

}