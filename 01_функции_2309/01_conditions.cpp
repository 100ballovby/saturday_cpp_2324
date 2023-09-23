#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

void simple_condition() {
    int x;
    cout << "Insert: "; cin >> x;

    if (x > 10) {  // значение переменной х больше 10
        cout << x << " is greater than 10" << endl;
    } else if (x == 10) {  // значение переменной х равно 10
        cout << x << " is equal 10" << endl;
    } else {  // в любом другом случае (если значение х меньше 10)
        cout << x << " is less than 10" << endl;
    }
}

void task_decart(int x, int y) {
    if (x > 0 && y > 0) {
        cout << 1 << endl;
    } else if (x < 0 && y > 0) {
        cout << 2 << endl;
    } else if (x < 0 && y < 0) {
        cout << 3 << endl;
    } else if (x > 0 && y < 0) {
        cout << 4 << endl;
    } else {
        cout << "0 is prohibited" << endl;
    }
}

void leap_year(int year) {
    // Високосным считается год, номер которого делится на 400 или 4 и не делится на 100
    if ((year % 400 == 0 || year % 4 == 0) & (year % 100 != 0)) {
        cout << year << " is leap year" << endl;
    } else {
        cout << year << " isn't leap year" << endl;
    }
}

int conditions_lesson1_main() {
    task_decart(-7, 7);
    leap_year(2000);
    leap_year(1700);
    leap_year(2100);
    leap_year(2012);
    leap_year(1984);

    return 0;
}
