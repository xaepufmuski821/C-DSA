#include <iostream>
#include <algorithm>
using namespace std;

// int hexToDecimal(string hex) {
//     int ans = 0;

//     for (int i = 0; i < hex.length(); i++) {
//         char ch = hex[i];
//         int digit;

//         if (ch >= '0' && ch <= '9') {
//             digit = ch - '0';
//         }
//         else if (ch >= 'A' && ch <= 'F') {
//             digit = ch - 'A' + 10;
//         }
//         else if (ch >= 'a' && ch <= 'f') {
//             digit = ch - 'a' + 10;
//         }
//         else {
//             cout << "Invalid hexadecimal digit";
//             return -1;
//         }

//         ans = ans * 16 + digit;
//     }

//     return ans;

// }

// int Convertor(int n , int r){
//     int ans = 0 , x = 1;

//     while(n > 0){
//         int digit = n % 10;
//         ans += digit * x;
//         n = n/10;
//         x *= r;

//     }

//     return ans;

// }

long long ToDecimal(const string& number, int base) {
    long long ans = 0;

    for (char ch : number) {
        int digit;

        if (ch >= '0' && ch <= '9') {
            digit = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            digit = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') {
            digit = ch - 'a' + 10;
        }
        else {
            cout << "Invalid digit '" << ch << "' for base " << base << "\n";
            return -1;
        }

        if (digit >= base) {
            cout << "Digit '" << ch << "' is not valid in base " << base << "\n";
            return -1;
        }

        ans = ans * base + digit;
    }

    return ans;
}

int main(){

    enum types{
        Octal,
        HexaDecimal,
        Binary

    };

    int choice;
    cout << "Enter choice(\n 0 for Octal \n 1 for HexaDecimal \n 2 for Binary) : ";
    cin >> choice;

        types t = static_cast<types>(choice);

        switch(t){
            case Octal: {
                cout << "Octal selected" << endl;
                
                string n;

                cout << "Enter an Octal number: ";
                cin >> n;

                cout << "The Decimal Equivalent is: "<< ToDecimal(n , 8);

                break;
            }

            case HexaDecimal: {
                cout << "Hexadecimal selected" << endl;

                string hex;

                cout << "Enter an HexaDecimal number: ";
                cin >> hex;

                cout << "The Decimal Equivalent is: "<< ToDecimal(hex , 16);

                break;
            
            }

            case Binary: {
                cout << "Binary selected" << endl;

                string n;

                cout << "Enter an Binary number: ";
                cin >> n;

                cout << "The Decimal Equivalent is: "<< ToDecimal(n , 2);

                break;
            
            }

            default:
                cout << "Invalid choice";

        }

    return 0;

}