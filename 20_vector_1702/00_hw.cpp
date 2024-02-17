#include <iostream>
#include <vector>
using namespace std;


void bubbleSort(vector<int> &my_vector) {
    int n = my_vector.size();
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (int i = 0; i < n - 1; i++) {
            if (my_vector[i] > my_vector[i + 1]) {
                swap(my_vector[i], my_vector[i + 1]);
                swapped = true;
            }
        }
    }
}


int linearSearch(vector<int> &my_vector, int key) {
    for (int i = 0; i < my_vector.size(); i++) {
        if (key == my_vector[i]) {
            return i;
        }
    }
    return -1;
}

void reverseVector(vector<int> &my_vector) {
    int n = my_vector.size();
    for (int i = 0; i < n / 2; i++) {
        swap(my_vector[i], my_vector[n - i - 1]);
    }
}

int vector_hw3_main() {
    vector<int> my_v = {5, 2, 4, -8, 7, 12, 31, 3};
    reverseVector(my_v);
    cout << "Reversed: ";
    for (int i : my_v) {
        cout << i << " ";
    }
    cout << endl;

    bubbleSort(my_v);
    for (int n : my_v) {
        cout << n << " ";
    }
    cout << "\n7 in vector is on: " <<  linearSearch(my_v, 7) << endl;
    return 0;
}


