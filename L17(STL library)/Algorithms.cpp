#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int arr[] = {5,3,1,2,4};
    sort(arr , arr+5);

    for(int i : arr){
        cout << i << " ";

    }
    cout << endl;

    sort(arr , arr+5 , greater<int>()); //Sorts in descending order

    for(int i : arr){
        cout << i << " ";   

    }
    cout << endl;

    vector <int> vec = {5,7,2,8,1};
    sort(vec.begin() , vec.end());

    for(int i : vec){
        cout << i << " ";

    }
    cout << endl;

    return 0;

}