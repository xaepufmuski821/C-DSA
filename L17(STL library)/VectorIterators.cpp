#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = {1,2,3,4,5};

    cout << *(vec.begin()) << endl;
    cout << *(vec.end()) << endl;

    vector <int> vec1 = {1,2,3,4,5};
    vector <int> :: iterator it;

    for(it = vec1.begin() ; it < vec1.end() ; it++){
        cout << *(it) << " ";

    }

    cout << endl;

    vector <int> vec2 = {1,2,3,4,5};
    //now rather than defining the itr here we can use the auto keyword which automatically detects that itr will be an iterator type.
    
    for(auto itr = vec2.rbegin() ; itr != vec2.rend() ; itr++){
        cout << *(itr) << " ";

    }

    return 0;

}