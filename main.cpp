#include <iostream>
#include <string>
#include <cmath>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


string to_binary(int n) {
    int rem;
    string binary;
    // делить число, пока оно не станет нулем
    while (n > 0) {
        rem = n % 2;
        binary = to_string(rem) + binary;  // трансформирует число в строку
        n /= 2;
    }
    return binary;
}

int to_decimal(string bin) {
    int decimal_number {0};

    for (int i = bin.size() - 1; i >= 0; i--) {
        decimal_number += (bin[i] - '0') * pow(2, bin.size() - 1 - i);
        // если от цифры char отнять '0', вы получите необходимое число
    }
    return decimal_number;
}

int main() {
    string binary = to_binary(217);
    cout << binary << endl;
    int dec = to_decimal("11011001");
    cout << dec << endl;
    return 0;
}


