#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int randint(int min, int max) {
    int x = min + rand() % (max - min + 1);
    return x;
}

int stars_main() {
    srand(time(NULL));  // "сбрасывает" генератор случайных чисел
    int n;
    char star = '*';
    cout << "Stars: "; cin >> n;

    for (int i = 1; i <= n; i++) {  // цикл генерирует ступеньки
        for (int j = 1; j < i; j++) {  // генерирует звездочки по номеру ступеньки
            cout << star << " ";
        }
        cout << endl;
    }

    return 0;
}
