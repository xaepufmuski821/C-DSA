#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> vec = {1,2,3,4,5};

    for(int i : vec){

        cout << i << " ";

    }

    cout << endl;

    vector <char> vecy = {'a' , 'b' , 'c'};

    for(char i : vecy){

        cout << i << " ";

    }

    return 69;

}