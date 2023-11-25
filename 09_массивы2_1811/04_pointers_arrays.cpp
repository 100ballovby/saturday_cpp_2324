#include <iostream>
#include <string>
#include <random>
using namespace std;


int main_p_arrays() {
    int length;
    cout << "Insert length of array: ";
    cin >> length;

    int *array = new int[length];  // динамический массив
    array[0] = 9; // присваиваю элементу под индексом 0 значение 9
    cout << array[0] << endl;
    array = nullptr;
    // cout << array[0] << endl;  <- после удаления динамически выделенного массива, обратиться к нему нельзя

    int len {4};
    int *array2 = new int[len] {9, 3, 4, 2};
    for (int i = 0; i < len; i++) {
        cout << *(array2 + i) << endl;
    }
    // увеличивать (или уменьшать) размер динамического массива все еще нельзя
    return 0;
}