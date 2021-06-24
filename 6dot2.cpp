
#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>

using namespace std;

int predel(int fpred, int spred) {

    double z;
    cin >> z; //считываем число
    if (z < fpred || z > spred || z == (long)z)
        def(&fpred, &spred, &z);
    else return z;
}


int def(int* fpred, int* spred, double* z) {
    cout << "\nДоступные действия:\n\n";

    cout << "1: Ввод верхнего предела\t";
    cout << "2: Ввод нижнего предела\n";
    cout << "3: Повторный ввод числа\t";
    cout << "Ввод любого иного варианта для выхода из программы";
    int k;
    cin >> k;
    switch (k) {
        case 1:
            cin >> *fpred;
        case 2:
            cin >> *spred;
        case 3:
            cin >> *z;
        default:
            exit(1);
    };
}
