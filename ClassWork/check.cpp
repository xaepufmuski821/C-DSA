#include <iostream>
#include <string>
using namespace std;

string convertBase(int num, int base) {
    if (num == 0) return "0";

    string digits = "0123456789ABCDEF";
    string result = "";
    bool isNegative = num < 0;
    if (isNegative) num = -num;

    while (num > 0) {
        int remainder = num % base;
        result = digits[remainder] + result; // prepend
        num /= base;
    }

    return isNegative ? "-" + result : result;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    cout << "Binary: " << convertBase(num, 2) << endl;
    cout << "Octal: " << convertBase(num, 8) << endl;
    cout << "Hexadecimal: " << convertBase(num, 16) << endl;

    return 0;
}