#include <iostream>
#include <string>
using namespace std;

int main()
{
    string key;
    string itkey;
    string text;
    string encrypted;

    cout << "Enter key: " << endl;
    cin >> key;

    cout << "Enter text: " << endl;
    cin >> text;

    itkey = key;

    for (int i = 0; i < itkey.size(); ++i)
    {
        if (itkey[i] >= 'A' && itkey[i] <= 'Z')
            key += itkey[i];
        else if (itkey[i] >= 'a' && itkey[i] <= 'z')
            key += itkey[i] + 'A' - 'a';
    }

    for (int i = 0, j = 0; i < text.length(); ++i)
    {
        char c = text[i];

        if (c >= 'a' && c <= 'z')
            c += 'A' - 'a';
        else if (c < 'A' || c > 'Z')
            continue;

        encrypted += (c + key[j] - 2 * 'A') % 26 + 'A';
        j = (j + 1) % key.length();
    }

    cout << "Encrypted: " << encrypted << endl;
}