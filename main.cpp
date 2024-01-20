#include <iostream>
#include <fstream>
#include <filesystem>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект

int r_int(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}

void task1() {
    ofstream file("../numbers.txt");
    for (int i = 0; i < 10; i++) {
        int n = r_int(1, 100);
        file << n << " ";
    }
}

void task2(string filename) {
    ifstream file("../" + filename);
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
}

void task3() {
    // Найти в файле numbers.txt самое большое и самое маленькое число.
    ifstream file("../numbers.txt");
    int max = INT_MIN;
    int min = INT_MAX;
    int number;

    while (file >> number) {
        if (number > max) {
            max = number;
        } else if (number < min) {
            min = number;
        }
    }
    cout << "Max " << max << endl;
    cout << "Min " << min << endl;
}

void task4() {
    // Найти в файле numbers.txt самое большое и самое маленькое число.
    ifstream file("../numbers.txt");
    int number;
    int count = 0;

    while (file >> number) {
        if (number % 3 == 0) {
            count++;
        }
    }
    cout << count << " number in file" << endl;
}

void task5() {
    string dictionary[15] {
        "deficit", "tight", "space", "century",
        "strange", "neighborhood", "island", "easy",
        "communist", "design", "order", "calendar",
        "culture", "scatter", "motivation",
    };
    ofstream file("../words.txt");
    for (int i = 0; i < 10; i++) {
        int r_index = r_int(0, 14);
        file << dictionary[r_index] << "\n";
    }
}

void task7() {
    ifstream f("../words.txt");
    string arr[20];
    int i = 0;
    for (string line; getline(f, line);) {
        arr[i] = line;
        i++;
    }

    int word_counts[20] = {0};
    for (string word : arr) {
        for (int j = 0; j < 20; j++) {
            if (word == arr[j]) {
                word_counts[j]++;
                break;
            }
        }
    }

    // найдем элемент с наибольшим значением в массиве
    int max_index = 0;
    for (int i = 1; i < 10; i++) {
        if (word_counts[i] > word_counts[max_index]) {
            max_index = i;
        }
    }

    cout << "Word: " << arr[max_index] << endl;
}

int main() {
    //task1();
    //task2("numbers.txt");
    //task3();
    //task4();
    //task5();
    //task2("words.txt");
    task7();
    return 0;
}


