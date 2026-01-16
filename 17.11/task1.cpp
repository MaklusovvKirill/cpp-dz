#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Введите числа (0 для завершения):" << endl;
    while (cin >> n && n != 0) {
        sum += n;
    }
    cout << "Сумма: " << sum << endl;
    return 0;
}