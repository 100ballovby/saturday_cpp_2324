#include <iostream>
#include <string>
#include <cmath>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


string encryptCaesar(string text, int shift) {
    string result = "";
    for (char c : text) {
        if (isalpha(c)) {  // если символ является буквенным
            char base = (islower(c) ? 'a' : 'A');
            result += char((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }
    return result;
}

int caesarmain() {
    string text {"Hello, I'm a Python developer!"};
    int shift = 2;

    string encrypted = encryptCaesar(text, shift);
    cout << "Encrypted message: " << encrypted << endl;

    cout << "Decription vars: " << endl;
    for (int i = 1; i <= 26; i++) {
        cout << encryptCaesar(encrypted, 26-i) << endl;
    }
    return 0;
}


