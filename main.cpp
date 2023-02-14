//Тевс Алина Вячеславовна
/*
Задание 1. Дана строка символов. Заменить в ней все пробелы на табуляции.
 */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string source = "Hi my dear friend !";
    string _old = " ";
    string _new = "\t";
    int pos;
    do {
        pos = source.find(_old);
        if (pos < 0 ) break;
        source.replace(pos, _new.size(), _new);
    } while (pos >= 0);
    cout << source << endl;
    return 0;
}