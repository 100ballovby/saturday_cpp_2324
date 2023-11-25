#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int rand_int(int min, int max) {
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
        arr[i] = rand_int(1, 100);
    }
}

int binary_search(int *array, int size, int key) {
    int low { 0 };
    int high { size - 1 };
    int mid = (low + high) / 2;

    while (low <= high) {  // пока не нашли искомое в массиве И пока массив не схлопнулся
        if (array[mid] == key) {
            return mid;
        } else if (array[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        mid = (low + high) / 2;  // переменная mid должна пересчитываться с каждым повторением цикла ВНЕ зависимости от того low или high была заменена
    }
    return -1;  // если число в массиве не было найдено
}

void bubble_sort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int array[100];
    fill_array(array, 100);  // наполним массив случайными числами в количестве 100 штук
    print(array, 100);
    cout << endl;
    bubble_sort(array, 100);   // отсортируем массив
    print(array, 100);

    cout << endl;
    int key, res;
    key = 95;
    res = binary_search(array, 100, key);
    cout << "Index of " << key << " in array is: " << res;
    return 0;
}


