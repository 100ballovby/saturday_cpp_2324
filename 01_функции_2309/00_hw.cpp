#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


float triangle(float b, float h) {
    float s = b * h / 2;
    return s;
}

int task2() {
    int x;
    cout << "Insert number: ";
    cin >> x;

    cout << x % 10 << endl;
    return 0;
}

int hw1_main() {
    float res = triangle(13.5, 10.2);
    cout << res << endl;
    return 0;
}
