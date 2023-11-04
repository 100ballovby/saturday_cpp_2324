#include <iostream>
#include <string>
#include <cmath>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


string cows(int number) {
    int rem = number % 10;
    string cows = "коро";
    if (rem == 1) {
        cows += "вa";
    } else if ((rem == 2 || rem == 3 || rem == 4) && (number % 100 < 10 || number % 100 >= 20)) {
        cows += "вы";
    } else {
        cows += "в";
    }
    return cows;
}

int strings_main() {
    int n; cout << "Сколько коров? "; cin >> n;
    cout << n << cows(n) << endl;
    return 0;
}


