#include <iostream>
#include <string>
#include <random>
using namespace std;

void pointers2() {
    int value = 10;
    int *ptr = &value; // в указателе можно хранить ТОЛЬКО адрес ячейки, в которой хранится значение
    // int *ptr2 = 5; <- нельзя указывать фактические значения указателю
    /* double value1 = 2.3;
    int *ptr2 = &value1; <- указатель не может ссылаться на "не свой" тип данных */

    cout << "Pointer address: " << ptr << endl;
    cout << "Pointer value: " << *ptr << endl;  // здесь звездочка уже оператор разыменовывания
    *ptr = 7;  // менять значение указателю МОЖНО
    cout << "Pointer address: " << ptr << endl;
    cout << "Pointer value: " << *ptr << endl;
}
