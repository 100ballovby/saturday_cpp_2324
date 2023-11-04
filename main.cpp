#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int randint(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

string generate_random_color() {
    string color = "#";
    string hex_alphabet = "0123456789ABCDEF";
    // TODO: Допишите функцию генерации случайного HEX-цвета.
    //  Напоминаю: HEX-цвета состоят из 6 символов (не включая #) 16-ричной системы,
    //  вначале цвета ставится #. Итоговая программа должна запрашивать у
    //  пользователя количество цветов и выводить их в консоль.

    return color;
}

int main() {

    cout << randint(1, 100);
    return 0;
}


