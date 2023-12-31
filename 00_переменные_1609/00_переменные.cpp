#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int main_dlya_peremennih() {
    cout << "Hello, World!" << endl;
    // объявим переменную
    int number;  // объявление (декларация) переменной позволяет зарезервировать за ней место в оперативной памяти
    // инициализируем переменную
    int days = 30;  // задание значения переменной сразу называется инициализацией
    // ^ копирующая инициализация
    float drob(1.07);  // прямая инициализация
    /* прямая инициализация лучше работает с одними типами данных,
     * копирующая лучше работает с другими */
    bool flag {false};  // uniform-инициализация, используется тогда, когда невозможно использовать копирующую и прямую

    // объявление нескольких переменных
    int a, b;  // указывать тип данных для каждой переменной не нужно
    // int a, double b; <- вот так делать нельзя
    // инициализация нескольких переменных
    int c{6}, d{8};

    // инициализировать две переменные одной операцией нельзя
    // int f, g = 5; // переменная f останется без значения
    int f{5}, g{5};
    cout << f << " " << g << endl;

    // Переменные НУЖНО объявлять в самом начале функции, для которой вы их будете использовать

    return 0;
}
