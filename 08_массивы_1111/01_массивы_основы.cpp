#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int arrays01_main() {
    int array[] { 8, 12, 46, -7, 3 };
    int length = sizeof(array) / sizeof(array[0]);
    cout << length << endl;

    // перебор массивов
    for (int i = 0; i < length; i++) {
        cout << "array[" << i << "] = " << array[i] << endl;
    }

    int size = 10;
    int numbers[size];
    for (int i = 0; i < size; i++) {
        cout << "Insert element №" << i << ": ";
        cin >> numbers[i];  // на место индекса i записать число из cin
    }

    // вывод массивов
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    int len = 100;
    int nums[len];
    for (int i = 0; i < len; i++) {
        nums[i] = r_int(1, 100);
    }
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}


