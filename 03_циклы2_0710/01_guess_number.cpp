#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int randint(int min, int max) {
    int x = min + rand() % (max - min + 1);
    return x;
}

int guess_main() {
    srand(time(NULL));  // "сбрасывает" генератор случайных чисел
    int guess, secret, tries {0};

    secret = randint(1, 100);
    cout << "Hello! Try to guess a number 1-100:" << endl;

    do {
        cout << "Your choice: "; cin >> guess;
        tries++;  // увеличиваем количество попыток для угадывания
        if (guess > secret) {
            cout << "Your number is grater than mine!" << endl;
        } else if (guess < secret) {
            cout << "Your number is lower than mine!" << endl;
        }
    } while (guess != secret && tries < 7);

    if (guess == secret) {
        cout << "Congratulations! You've guessed my number. Tries: " << tries << endl;
    } else {
        cout << "LOL! My number is " << secret << endl;
    }

    return 0;
}
