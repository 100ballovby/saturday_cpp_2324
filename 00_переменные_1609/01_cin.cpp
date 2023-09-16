#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int cin_function() {
    cout << "Hello, World!" << endl;
    int f, g;
    cout << "Insert number for f and g through space: ";
    cin >> f >> g;  // если вы планируете вводить значения нескольким переменным, лучше делать так
    //cout << "Insert number for g: ";
    //cin >> g;

    cout << f << " " << g << endl;

    float res = 12.0 / 7.0;
    cout << res << endl;

    cout << f << (f % 2 == 0 ? " is even" : " is odd") << endl;
    return 0;
}
