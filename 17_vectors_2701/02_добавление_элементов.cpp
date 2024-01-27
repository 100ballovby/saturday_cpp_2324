#include <iostream>
#include <vector>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int r_int(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}



int methods1_vector_main() {
    /* Методы векторов:
     * Метод - это функция, которая относится к определенному контейнеру (вектору) и
     * позволяет выполнять с контейнером различные операции. */

    // size() и empty()
    // size() - определяет количество ячеек в векторе
    // empty() - определяет, является ли вектор пустым

    // push_back() и pop_back()
    vector <int> numbers;
    for (int i = 0; i < 20; i++) {
        numbers.push_back(r_int(1, 100));  // метод добавления значения в вектор
        cout << numbers[i] << " ";
    }
    numbers.push_back(100); // добавить значения в вектор можно в любой момент

    cout << endl << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    numbers.pop_back();  // метод удаления элемента из вектора (удаляет последний)
    cout << endl;
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }


    return 0;
}


