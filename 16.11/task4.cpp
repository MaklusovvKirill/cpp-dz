#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Введите два числа и оператор (+, -, *, /): ";
    cin >> a >> b >> op;
    if (op == '+')
        cout << a + b << endl;
    else if (op == '-')
        cout << a - b << endl;
    else if (op == '*')
        cout << a * b << endl;
    else if (op == '/') {
        if (b != 0)
            cout << a / b << endl;
        else
            cout << "Ошибка: деление на ноль!" << endl;
    } else
        cout << "Некорректный оператор" << endl;
    return 0;
}