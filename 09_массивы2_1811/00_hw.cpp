#include <iostream>
#include <string>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int hw_arrays1_main() {
    int A[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int sum {0};
    double mid;

    for (int i = 0; i < 11; i++) {
        sum += A[i];
    }
    mid = sum / 10;
    cout << "Summ of elements: " << sum << endl;
    cout << "Middle: " << mid << endl;
    return 0;
}


