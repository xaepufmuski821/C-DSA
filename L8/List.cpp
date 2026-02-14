#include <iostream>
#include <list>
using namespace std;

int main(){

    list <int> l = {1,2,3,4,5};

    for(int i : l){
        cout << i << " ";

    }
    cout << endl;

    l.push_back(6);
    l.push_front(0);
    
    for(int i : l){
        cout << i << " ";

    }
    cout << endl;

    l.pop_front();
    l.pop_back();

    for(int i : l){
        cout << i << " ";

    }
    cout << endl;

    return 0;

}