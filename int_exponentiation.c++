#include<iostream>
 
using namespace std;

int main() {
    int base;
    int exp;
    int mod;

    cout << "Enter the base #: ";
    cin >> base;

    cout << "Enter the exponent #: ";
    cin >> exp;

    cout << "Enter the mod #: ";
    cin >> mod;
    
    int result = 1;
    while (exp > 0) {
        if ((exp % 2) == 1) {
            result = ((result * base) % mod);
        }
        base = ((base * base) % mod);
        exp = floor(exp / 2);
    }
    cout << result << endl;
}
