#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << "top = " <<s.top() << endl;

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();

    }
    cout << endl;

    s.push(1);
    s.push(2);
    s.push(3);

    stack <int> s2;
    s2.swap(s);

    cout << "s.size: " <<s.size() << endl;
    cout << "s1.size: " << s2.size() << endl;

    return 0;

}