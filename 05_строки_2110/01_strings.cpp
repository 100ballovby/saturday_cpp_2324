#include <iostream>
#include <string>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

void linear_search() {
    string phrase {"Blah-blah-blah, i'm a C++ developer. Hello world!"};
    char s;
    cout << "Symbol: "; cin >> s;
    // сам алгоритм поиска
    for (int i = 0; i < phrase.size(); i++) {
        if (s == phrase[i]) {  // если символ в строке совпал с искомым значением
            cout << i << endl;  // вывести индекс
            break;  // принудительно выйти из цикла
        }
    }
}

string bubble_sort(string str) {
    bool swapped;  // отсортированы
    do {
        swapped = false;  // по умолчанию мы считаем, что последовательность не отсортирована
        for (int i = 0; i < str.length(); i++) {
            if (str[i] > str[i + 1]) {  // если текущий элемент больше следующего
                swap(str[i], str[i + 1]);  // поменять местами значения
                swapped = true;
            }
        }
    } while (swapped);

    return str;
}

int strings_main() {
    string phr {"bejwkjexmdakdwkem"};
    // объединение строк (функция append())
    string s1 {"hey"};
    string s2 {"horror"};
    s1.append(s2, 0, 2);  // добавить из s1 2 символа начиная с нулевого
    cout << s1 << endl;

    // вставка
    string s3 {"mama ramu "};
    s3.insert(4, " mila");  // c 4 индекса вставить значение
    s3.insert(15, s2, 0, 3);  // c 15 индекса вставить из s2 символы с 0 по 3
    cout << s3 << endl;

    // замена
    string s4 {"moloko"};
    s4.replace(1, 3, "le");  // с индекса 1 до индекса 3 заменить на "le"
    cout << s4 << endl;

    // поиск
    string s5 {"Privet Andrey!"};
    cout << s5.find("And") << endl;  // найдет индекс, с которого начинается подстрока

    // определение длины
    string s6 {"Fantzer ti menya nazivala!"};
    cout << s6.length() << endl;  // возвращает целое число = длине строки
    return 0;
}


