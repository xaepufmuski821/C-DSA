// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector <int> vec){

    int maxPro = 0;
    int bestBuy = vec[0];
    
    for(int i = 1 ; i < vec.size() ; i++){
        if(vec[i] > maxPro){
            maxPro = max(maxPro , vec[i] - bestBuy);

        }

        bestBuy = min(bestBuy , vec[i]);

    }

    return maxPro;

}

int main(){

    vector <int> vec = {7,1,5,3,6,4};

    cout << "Maximum Profit: " << maxProfit(vec);

    return 0;

}