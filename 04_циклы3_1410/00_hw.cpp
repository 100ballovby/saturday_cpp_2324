#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

/*1. Дано целое число, не меньше 2. Найдите и
 * выведите его наименьший натуральный делитель отличный от 1.
*/

int gcd() {
    int n;
    cout << "n: "; cin >> n;

    // наименьший делитель отличный от 1 - первый делитель, который больше 1
    int div {2};
    while (n % div != 0) {
        div++;
    }
    return div;
}

int gcd2() {
    int n;
    cout << "n: "; cin >> n;
    for (int div = 2; div <= n; div++) {
        if (n % div == 0) {
            return div;
        }
    }
}
