#include <iostream>
#include <string>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int hw_strings2810() {

    string phrase {"Lorem ipsum dolor sit amet, consectetur adipiscing."};
    int count {0};
    for (char symb : phrase) {
        if (symb == ' ') {
            count++;
        }
    }
    cout << "There are " << count + 1 << " words.";
    return 0;
}


