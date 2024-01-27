#include <iostream>
#include <vector>
#include <random>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


int r_int(int min, int max) {
    random_device rd;  // сам генератор
    mt19937 gen(rd());  // занимается генерацией числа
    uniform_int_distribution<int> distribution(min, max);
    return distribution(gen);
}



int inserting_vector_main() {
    /* insert() - позволяет вставить значение в вектор
     * имя_вектора.insert(<итератор>, <значение>)
     * итератор - указатель на определенное место в коллекции
     * */
    vector <int> numbers;

    for (int i = 0; i < 10; i++) {
        numbers.push_back(r_int(1, 100));
        cout << numbers[i] << " ";
    }
    cout << endl;
    numbers.insert(numbers.begin() + 5, 1000000);  // begin() - итератор на начало вектора
    // нужно вставить на место предпоследнего элемента значение 8888
    numbers.insert(numbers.end() - 1, 8888);  // end() - итератор на конец вектора
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    /* Если вы добавляете элементы в конец вектора, скорость работы программы
     * будет выше, потому что при добавлении в начало/середину необходимо
     * сдвигать элементы. Также при добавлении в начало/середину в векторе происходит смещение
     * всех ячеек и пересчитываются индексы. К тому же смещение происходит по одной
     * ячейке (как в линейном поиске) => чем длинне вектор, тем больше времени
     * нужно на добавление элементов в его начало. */


    return 0;
}


