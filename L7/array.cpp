#include <iostream>
using namespace std;

int main(){

    int marks[4] = {1,2,3,4};

    cout << marks[1] << endl;

    marks[1] = 12;

    cout << marks[1] << endl;

    int size = sizeof(marks);
    cout << size << endl;

    cout << sizeof(marks) / sizeof(int) << endl;

   return 69;

}       