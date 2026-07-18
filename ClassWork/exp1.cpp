// Study of Number System Conversion (Convert Decimal to Binary, Octal, Hexadecimal)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> Convertor(int n , int base){
    vector <int> ans;

    if(n == 0){
        return {0};
    }

    while(n > 0){
        ans.push_back((n % base));
        n /= base;

    }

    int st = 0 , end = ans.size() - 1;

    while(st < end){
        swap(ans[st] , ans[end]);
        st++ , end--;

    }

    return ans;

}

int main(){ 

    int n;
    cout << "Enter Decimal no to convert: ";
    cin >> n;

    enum types{
        Binary = 1,
        Octal,
        HexaDecimal

    };

    int count;
    cout << "What do you want to convert it into:\n 1:Binary\n 2:Octal \n 3:HexaDecimal : ";
    cin >> count;

    types t = static_cast<types>(count);

    switch(t){
        case Binary:{
            cout << "Its Binary form is: ";

            vector <int> ans = Convertor(n , 2);

            for(int i : ans){
                cout << i;

            }

            break;

        }

        case Octal:{
            cout << "Its Octal form is: ";

            vector <int> ans = Convertor(n , 8);

            for(int i : ans){
                cout << i;

            }

            break;

        }

        case HexaDecimal:{
            cout << "Its HexaDecimal form is: ";

            vector <int> ans = Convertor(n , 16);

            for(int i : ans){
                if(i < 10){
                    cout << i;

                }else{
                    cout << char('A' + (i-10));

                }

            }

            break;

        }

        default:
            cout << "You could'nt even enter a valid choice FAILURE!!!";
            break;

    }

    return 0;

}