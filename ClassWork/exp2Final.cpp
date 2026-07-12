#include <iostream>
using namespace std;

// Works for any base from 2 to 16
long long toDecimal(const string& number, int base) {
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

int main() {
    enum Types { Octal, HexaDecimal, Binary };

    int choice;
    cout << "Enter choice(\n 0 for Octal \n 1 for HexaDecimal \n 2 for Binary): ";
    cin >> choice;

    Types t = static_cast<Types>(choice);
    string input;
    int base;

    switch (t) {
        case Octal:       cout << "Enter an Octal number: ";        base = 8;  break;
        case HexaDecimal: cout << "Enter a Hexadecimal number: ";    base = 16; break;
        case Binary:      cout << "Enter a Binary number: ";         base = 2;  break;
        default:
            cout << "Invalid choice\n";
            return 1;
    }

    cin >> input;
    long long result = toDecimal(input, base);

    if (result != -1) {
        cout << "The Decimal Equivalent is: " << result << "\n";
    }

    return 0;
}