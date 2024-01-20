#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib>
using namespace std;  // подключаю ВСЕ функции из пространства std в свой проект


filesystem::path make_directory(string path, string dirname) {
    // создаем папку
    filesystem::path dir_path = path + "/" + dirname;  // устанавливаю путь к новой папке
    filesystem::create_directory(dir_path);  // создаем папку с путем dir_path
    return dir_path;
}

// функция: которая ищет в указанном каталоге все файлы с определенным расширением
void find_files(string path, string ext=".json") {
    filesystem::path root_path = path;
    for (auto &file : filesystem::directory_iterator(root_path)) {
        if (file.path().extension() == ext) {
            cout << file.path() << endl;
        }
    }
}

void delete_dir(string path) {
    filesystem::path dir_path = path;  // путь к папке берем из параметра
    filesystem::remove_all(dir_path); // удалить все, что находится в пути path
}

bool move_file(filesystem::path file_path, filesystem::path new_dir_path) {
    // проверяем, существует ли файл
    if (!filesystem::exists(file_path)) {
        return false;
    }
    filesystem::path new_file_path = new_dir_path / file_path.filename();
    // перемещаем файл
    filesystem::rename(file_path, new_file_path);
    return true;
}

int filesystem_run_main() {
    filesystem::path d_p = make_directory("/Users/greatraksin/CLionProjects/saturday_cpp_2324", "new_folder");
    find_files(d_p);
    delete_dir(d_p);
    filesystem::path d_p2 = make_directory("/Users/greatraksin/CLionProjects/saturday_cpp_2324",
                                           "test_folder");
    move_file("/Users/greatraksin/CLionProjects/saturday_cpp_2324/test.json",
              d_p2);
    return 0;
}


