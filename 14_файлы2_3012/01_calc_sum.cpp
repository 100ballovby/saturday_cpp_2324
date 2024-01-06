#include <iostream>
#include <fstream>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


double calculateSumFromFile(string file_name) {
    ifstream b_file(file_name, ios::binary);

    if (!b_file.is_open()) {
        cout << "Error!";
        return 0.0;
    }
    double sum = 0.0;
    double cur_n;

    while (b_file >> cur_n) {
        cout << cur_n << endl;
        sum += cur_n;
    }
    b_file.close();
    return sum;
}


int calcsumfilemain() {
    string base_path = "/Users/greatraksin/CLionProjects/saturday_cpp_2324";
    double result = calculateSumFromFile(base_path + "/numbers.dat");

    cout << "Sum of numbers is: " << result << endl;

    return 0;
}


