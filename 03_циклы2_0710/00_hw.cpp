#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int factorial(int n) {
    if (n >= 0) {
        int res = 1;
        for (int i = 2; i <= n; i++) {
            res *= i;
        }
        return res;
    } else {
        return 0;
    }
}

int sum_of_digits(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}


int dz_loops_main() {
    cout << factorial(0) << endl;
    cout << factorial(6) << endl;
    cout << factorial(7) << endl;
    cout << sum_of_digits(3456789) << endl;
    cout << sum_of_digits(25) << endl;
    return 0;
}
