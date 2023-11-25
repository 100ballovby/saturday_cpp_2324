#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int rint(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

void print(int (&array)[6], int size) {  // передача массива по ссылке в функцию
    for (int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }
}

// передача массива по указателю в функцию
void fill_array(int *arr, int length) {
    for (int i = 0; i < length; i++) {
        arr[i] = rint(1, 100);
    }
}

/* Когда вы передаете массив через указатель функци, она
 * выполняет действия с массивом БЕЗ копирования в себя. Соответственно,
 * ничего возвращать (сам массив) она не должна. Все действия (в данном
 * случае наполнение массива) происходит с массивом array внутри функции main() */

int ptr_link_main_array() {
    int array[6];
    fill_array(array, 6);
    print(array, 6);
    return 0;
}


