#include <iostream>
#include <fstream>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int r_int(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}


string *read_file(string &file_name) {
    ifstream file(file_name, ios_base::in);
    if (!file.is_open()) {
        cout << "Error!" << endl;
    }

    string line;
    int size = 0;
    while (getline(file, line)) {
        size++;
    }
    file.close();
    ifstream file1(file_name, ios_base::in);

    string *content = new string[size];
    int i = 0;
    while (getline(file1, line)) {
        content[i] = line;
        i++;
    }
    file.close();
    return content;
}


int auto_create_files_main() {
    string path = "/Users/greatraksin/CLionProjects/saturday_cpp_2324/examples/questions.txt";
    string *lines = read_file(path);
    for (int i = 0; i < 35; i++) {
        cout << lines[i] << endl;
    }
    string base_path = "/Users/greatraksin/CLionProjects/saturday_cpp_2324/exam"; // у вас -> ...\\exam
    for (int i = 0; i < 35; i++) {
        ofstream file(base_path + "/file_" + to_string(i + 1) + ".txt", ios_base::app);
        for (int j = 0; j < 2; j++) {
            int index = r_int(0, 34);
            file << lines[index] + '\n';
        }
    }
    return 0;
}


