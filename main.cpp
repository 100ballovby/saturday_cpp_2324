#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int randint(int min, int max) {
    int x = min + rand() % (max - min + 1);
    return x;
}

int main() {
    srand(time(NULL));  // "сбрасывает" генератор случайных чисел

    return 0;
}
