#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект



int hw_filepath_desktop_main() {
    filesystem::path desktop = "/Users/greatraksin/Desktop";

    // создать итератор для прохода по всем файлам переданного пути
    for (auto &entry : filesystem::directory_iterator(desktop)) {
        // если файл является текстовым
        if (entry.path().extension() == ".txt") {
            // открываем файл для чтения
            ifstream file(entry.path());
            string line;
            // читаем файл построчно
            while (getline(file, line)) {
                // Если в строке встречается цифра 5, вывести название файла
                if (line.find('5') != string::npos) {  // если символ '5' не найден, функция вернет npos
                    cout << entry.path().filename() << endl;
                    break;
                }
                /*for (char symbol : line) {
                    if (symbol == '5') {
                        cout << entry.path().filename() << endl;
                        break;
                    }
                } <- один из вариантов поиска в строке файла */
            }
            //cout << entry.path().filename() << endl;
        }
    }
    return 0;
}


