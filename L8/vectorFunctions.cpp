#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec;

    cout << "size: " << vec.size() << endl;

    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "size after pushing: " << vec.size() << endl;

    vec.pop_back();

    cout << "Vector: ";

    for(int i : vec){
        cout << i << " ";

    }

    cout << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(0) << endl;

    return 69;

}