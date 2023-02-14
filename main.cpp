/*
 * Задание 2. Дана строка символов.
 * Определить количество букв, цифр и остальных символов, присутствующих в строке.*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string _string;
    cin >> _string;
    int letters=0, digit = 0, symbol=0;
    int b = _string.size();
    cout << b<< endl;
    for (int i=0; i< b; i++){
        if (isalpha(_string[i])){
            letters++;
        }else{
            if(isdigit(_string [i])){
                digit++;
            }else{
                symbol++;
            }
        }
    }
    cout << "Quantity of letters = "<<letters<<endl;
    cout << "Quantity of digit = "<<digit<<endl;
    cout << "Quantity of symbols = "<<symbol<<endl;
    return 0;
}