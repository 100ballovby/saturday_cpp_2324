#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int randint(int min, int max) {
    int x = min + rand() % (max - min + 1);
    return x;
}

int reversed_main() {
    srand(time(NULL));  // "сбрасывает" генератор случайных чисел
    int n, reversed_n = 0;
    cout << "n = "; cin >> n;

    while (n > 0) {
        int remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n /= 10;
    }
    cout << "Reversed n: " << reversed_n << endl;
    return 0;
}
