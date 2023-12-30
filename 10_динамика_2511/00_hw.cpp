#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int riint(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}



int dynamic_hw_01() {
    int n;
    cout << "Insert n: ";
    cin >> n;

    int *A = new int[n];
    for (int i = 0; i < n; i++) {
        A[i] = riint(1, 100);
        cout << A[i] << " ";
    }

    int max = A[0];
    int min = A[0];
    double mid = 0.0;
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += A[i];
        if (A[i] > max) {
            max = A[i];
        } else if (A[i] < min) {
            min = A[i];
        }
    }
    mid = sum / n;
    cout << endl << "Max element is: " << max << endl;
    cout << "Min element is: " << min << endl;
    cout << "Middle: " << mid << endl;

    A = nullptr;
    return 0;
}


