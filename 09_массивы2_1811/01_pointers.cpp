#include <iostream>
#include <string>
#include <random>
using namespace std;

void pointers() {
    int b = 5;
    cout << b << endl;
    cout << &b << endl;  // оператор УКАЗЫВАЕТ на место, ГДЕ можно найти значение b
    cout << *&b << endl;  // оператор РАЗЫМЕНОВЫВАЕТ адрес ячейки (получает фактическое значение)

    int *iPtr;  // указатель типа int | в данном случае звездочка - это не оператор разыменовывания
    cout << iPtr << endl;  // эта штука при выводе отдает адрес, на который ссылается
// при объявлении нескольких указателей, звездочка ставится ПЕРЕД КАЖДЫМ идентификатором
    int *iPtr1, iPtr2, iPtr3;  // здесь указатель - это только iPtr1
    double *dPtr1, *dPtr2, *dPtr3; // здесь указателями являются ВСЕ переменные

}