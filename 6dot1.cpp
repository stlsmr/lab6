#include <iostream>
#include <algorithm>

using namespace std;

int main () {
    int a, b, c;
    cout << "Напишите функцию, которая возвращает наибольший из трех целочисленных\n"
            "аргументов;\n";
    cout << "Введите А:"; cin>> a;
    cout << "Введите B:"; cin>> b;
    cout << "Введите C:"; cin>> c;
    cout << "Максимальное из введеных вами чисел - " << max(a, max(b, c));
    return 0;
}