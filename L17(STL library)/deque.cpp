#include <iostream>
#include <deque>
using namespace std;

int main(){

    deque <int> d = {1,2,3,4};

    for(int i : d){
        cout << i << " ";

    }
    cout << endl;

    cout << d[1];

    return 0;

}