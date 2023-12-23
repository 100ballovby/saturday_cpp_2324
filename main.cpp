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
    string lines;
    ifstream my_file(path + file_name);

    /* while (!my_file.eof()) {
        string line;
        my_file >> line;
        lines += line;
    } */
    while (!my_file.eof()) {
        string line;
        getline(my_file, line);
        lines += line;
    }

    cout << lines << endl;
}


int main() {
    string path { "/Users/greatraksin/CLionProjects/saturday_cpp_2324/examples/" };
    read_file(path, "pi_digits.txt");
    return 0;
}


