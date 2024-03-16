#include <iostream>
#include <vector>
#include <string>
#include <iterator>  // добавить заголовочный файл iterator
using namespace std;

void sortPointers(vector<int> &my_v) {
    int n = my_v.size();
    for (int j = 1; j < n; j++) {  // цикл проходит по элементам массива со 2 элемента до последнего (первый считается отсортированным в первом проходе)
        int i = j - 1;  // фиксируем элемент, предшествующий текущему элементу j
        int value = my_v[j];  // фиксируем значение элемента массива, на который указывает j
        while (i >= 0 && my_v[i] > value) {  // цикл-заполнитель
            my_v[i + 1] = my_v[i];
            i--;
        }
        my_v[i + 1] = value;
    }
}

void selectionSort(vector<int> &my_v) {
    int n = my_v.size();
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (my_v[j] < my_v[min_index]) {
                min_index = j;
            }
        }
        if (min_index != i) {
            swap(my_v[i], my_v[min_index]);
        }
    }
}

int main() {
    vector<int> array { 5, 2, 4, 1, 9, 6, 0 };
    //sortPointers(array);
    selectionSort(array);
    // вывести отсортированный массив
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


