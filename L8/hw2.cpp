//To reverse a vector using a function

#include <iostream> 
#include <vector>
using namespace std;

void ReverseVec(vector <int> &num){
    int start = 0, end = 3;
    while(start <= end){
        swap(num[start] , num[end]);
        start++;
        end--;

    }

    for(int i : num){
        cout << i << " ";
        
    }
    
}

int main(){

    vector <int> num = {1,2,3,4};
    ReverseVec(num);

    return 0;

}