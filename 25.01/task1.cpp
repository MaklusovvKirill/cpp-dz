#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    int sum = a + b;
    if (sum > 0)
        cout << "Сумма положительная: " << sum << endl;
    else if (sum < 0)
        cout << "Сумма отрицательная: " << sum << endl;
    else
        cout << "Сумма равна нулю" << endl;

    return 0;
}