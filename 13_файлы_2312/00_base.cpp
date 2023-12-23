#include <iostream>
#include <fstream>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


void write_file(string path, string file_name, string text) {
    // создание/открытие файла start.txt
    // ofstream file;
    // file.open("start.txt", ios_base::out) <- этот вариант тоже доступен
    ofstream my_file(path + file_name, ios_base::out);

    if (my_file.is_open()) {  // проверяем, открыт ли файл
        my_file << text;  // вписать в файл информацию
        my_file.close();  // закрыть файл
    } else {  // если файл не удалось открыть
        cout << "Error!" << endl;
    }
}


void read_file(string path, string file_name) {
    // нужно создавать промежуточное хранилище для содержимого файла
    char temp[100];  // символьный массив на 100 символов
    // открываем файл для чтения
    ifstream my_file(path + file_name);
    /*my_file >> temp;  < таким способом вы достанете только первое слово (до первого пробела) из файла
    cout << temp << endl;*/

    // Считываем определенное количество символов и записывает в нашу переменную
    my_file.getline(temp, 100);
    my_file.close();  // закрываем файл
    cout << temp << endl;  // выводим первые 100 символов, которые считали

    cin.get(); // чтобы cin нормально работал после отработки функции
}


int files_1lesson_main() {
    string path { "/Users/greatraksin/CLionProjects/saturday_cpp_2324/output/" };
    read_file(path, "start.txt");
    return 0;
}


