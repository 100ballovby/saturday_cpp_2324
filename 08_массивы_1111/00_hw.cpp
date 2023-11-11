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

    for (int i = 0; i < 6; i++) {
        int num = randint(0, hex_alphabet.size());
        color += hex_alphabet[num];
    }

    return color;
}

int colors_hw_main() {

    cout << generate_random_color() << endl;
    return 0;
}


