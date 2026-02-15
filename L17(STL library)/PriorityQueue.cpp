#include <iostream>
#include <queue>
using namespace std;

int main(){

    priority_queue <int> p;

    p.push(10);
    p.push(5);
    p.push(2);

    while(!p.empty()){
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;

    priority_queue <int , vector<int> , greater<int>> p1; // this is basically reverse of normal priority queue

    p1.push(10);
    p1.push(5);
    p1.push(2);

    while(!p1.empty()){
        cout << p1.top() << " ";
        p1.pop();
    }

    return 0;   

}