#include <iostream>
using namespace std;

int main() {
    char repeat;
    do {
        double a, b;
        char op;
        cout << "Введите два числа и оператор (+, -, *, /): ";
        cin >> a >> b >> op;

        if (op == '+') cout << a + b << endl;
        else if (op == '-') cout << a - b << endl;
        else if (op == '*') cout << a * b << endl;
        else if (op == '/') {
            if (b != 0) cout << a / b << endl;
            else cout << "Ошибка: деление на ноль!" << endl;
        } else cout << "Неверный оператор!" << endl;

        cout << "Повторить? (y/n): ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');
    return 0;
}