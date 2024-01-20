#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

/* Написать программу, которая объединяет содержимое двух
 * файлов "my_file1.txt" и "my_file2.txt" в один файл "my_file3.txt".
*/

int hw_main_joinfiles() {
    ifstream file1("../hw_files/my_file1.txt");
    ifstream file2("../hw_files/my_file2.txt");
    ofstream file3("../hw_files/my_file3.txt");

    string line;
    while (getline(file1, line)) {
        file3 << line << endl;
    }

    while (getline(file2, line)) {
        file3 << line << endl;
    }

    file1.close();
    file2.close();
    file3.close();
    return 0;
}


