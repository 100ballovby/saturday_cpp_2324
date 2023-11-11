#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int r_int(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}


int search_array(int array[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1;
}


int main() {
    int size = 10;
    int A[size];
    for (int i = 0; i < size; i++) {
        A[i] = r_int(1, 50);
    }

    int found = search_array(A, size, 5);
    cout << found << endl;

    for (int i = 0; i < size; i++) {
        cout << A[i] << ' ';
    }
    cout << endl;
    for (int i = size - 1; i >= 0; i--) {  // разворот вывода массива
        cout << A[i] << ' ';
    }
    cout << endl;
    return 0;
}


