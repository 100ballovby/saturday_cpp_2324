#include <iostream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

void char_start() {
    char ch1(97);  // если вы сохраните симольный тип как число, он выведется как символ
    char ch2('a');  // символьный тип пишется в одинарных кавычках

    cout << ch1 << endl;
    cout << ch2 << endl;
    cout << static_cast<char>(98) << endl;  // преобразование char-код в символ
    cout << 'a' << endl;  // напрямую символы выводить можно

    // char (числовой) можно конвертировать с помощью static_cast
    // static_cast<новый_тип_данных>(выражение) <- преобразует выражение в новый тип
    char ch(101);
    cout << ch << endl;
    cout << static_cast<int>(ch) << endl;  // конвертация не влияет на переменную
    cout << ch << endl;
}

void char_input() {
    cout << "Input a keyboard character: ";
    char letter; cin >> letter;
    cout << letter << " has ASCII code " << static_cast<int>(letter) << endl;
}

void char_endl_n() {
    cout << "Input a keyboard character: ";
    char letter; cin >> letter;
    cout << letter << " has ASCII code " << static_cast<int>(letter) << "\n";
    cout << "New line";

    /* endl переводят курсор на новую строку (в окне вывода), \n занимается тем же самым,
     * НО endl гарантирует, что ВСЕ данные из буфера обмена будут ВЫВЕДЕНЫ перед
     * тем, как продолжить вывод. 
     * 
     * 1. Используем endl, когда нужно, чтобы все ваши данные выводились сразу же (при записи в файл)
     * 2. \n используется во всех остальных случаях */
}