#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int rint1(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

void print(int *array, int size) {  // передача массива по указателю в функцию
    for (int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }
}

// передача массива по указателю в функцию
void fill_array(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = rint1(1, 100);
    }
}

int pointer_func_array_main() {
    int array[6];
    fill_array(array, 6);
    print(array, 6);
    return 0;
}


