#include <iostream>
#include <string>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


void hw() {
    string phrase {"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus id sapien dui. Integer ante libero, iaculis sit amet pulvinar eu, convallis vel ante. Fusce eu neque eu massa rutrum sollicitudin. Nullam placerat lectus erat, vel molestie ipsum iaculis pulvinar. Vivamus eget sem et odio faucibus imperdiet. In lectus est, venenatis ac ex ac, aliquam feugiat enim."};
    int punctuation {0};
    char maxSymbol {'\0'};  // NULL
    for (char symbol : phrase) {
        if (symbol == '.' || symbol == ',') {
            punctuation++;
        } else if (symbol > maxSymbol) {
            maxSymbol = symbol;
        }
    }
    cout << "There is " << punctuation << "symbols" << endl;
    cout << "Max symbol is " << maxSymbol << endl;
}
