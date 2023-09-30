#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


void stop() {
    cout << 5 << endl;
    exit(0); // завершаем исполнение программы в этой точке
    // код после exit не выполняется
    cout << 3 << endl;
}

void goto_label() {
    double x;
    tryAgain:  // лейбл указывает точку возврата потока
    cout << "Insert positive float value: ";
    cin >> x;

    if (x < 0.0) {
        goto tryAgain;  // мы возвращаемся в точку, если выполняется условие
    }
    cout << sqrt(x) << endl;
}