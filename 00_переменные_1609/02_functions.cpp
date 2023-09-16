#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int even_or_odd(int number) {
    bool result = number % 2 == 0;  // вычисляю результат математической операции
    return result;  // возвращаю результат
}  // пользовательская функция

int functions_even_odd() {
    cout << "Hello, World!" << endl;
    int f, g;
    cout << "Insert number for f and g through space: ";
    cin >> f >> g;

    cout << f << (even_or_odd(f) ? " is even" : " is odd") << endl;
    cout << g << (even_or_odd(g) ? " is even" : " is odd") << endl;
    return 0;
}
