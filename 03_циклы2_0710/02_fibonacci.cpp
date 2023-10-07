#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int randint(int min, int max) {
    int x = min + rand() % (max - min + 1);
    return x;
}

int fib_main() {
    srand(time(NULL));  // "сбрасывает" генератор случайных чисел
    int n;
    long next, a = 0, b = 1;
    cout << "How many fib you need? "; cin >> n;
    for (int i = 0; i < n; i++) {
        if (i < 2) {
            next = i;
        } else {
            next = a + b;
            a = b;
            b = next;
        }
        cout << next << " ";
    }
    return 0;
}
