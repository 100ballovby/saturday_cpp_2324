#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


void listdir(filesystem::path current_path) {
    for (const auto &entry : filesystem::directory_iterator(current_path)) {
        cout << entry.path() << endl;
    }
}


void print_file_contents(filesystem::path dirname) {
    for (const auto &entry : filesystem::directory_iterator(dirname)) {
        if (entry.is_regular_file()
            && (entry.path().extension() == ".txt" || entry.path().extension() == ".cpp")) {
            cout << "\nFile " << entry.path().filename() << ". Trying to open..." << endl;
            ifstream file(entry.path());

            if (!file.is_open()) {  // если файл не получается открыть
                cout << "Failed to open file: " << entry.path() << endl;
                return;  // выйти из функции
            }

            cout << "File content:" << endl << endl;
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        }
    }
}

int pathes_main() {
    /* getenv(char) <- функция, которая позволяет достать что-то из переменных среды
     * parent_path() <- функция, которая позволяет определить путь к папке, которая находится уровнем выше
     * filesystem::path() <- функция, которая строит путь к папке/файлу */
    filesystem::path main_dir = filesystem::current_path().parent_path();
    listdir(main_dir);

    for (const auto &entry : filesystem::directory_iterator(main_dir)) {
        print_file_contents(entry.path());
    }

    //string exam_path = "/Users/greatraksin/CLionProjects/saturday_cpp_2324/exam";
    //print_file_contents(exam_path);
    return 0;
}


