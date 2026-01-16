#include <iostream>
#include <climits>
using namespace std;

int main() {
    int count = 0;
    double sum = 0, num;
    double min_val = INT_MAX, max_val = INT_MIN;

    cout << "Введите числа (введите не число, например 'q', для завершения):" << endl;
    while (cin >> num) {
        count++;
        sum += num;
        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }

    if (count == 0) {
        cout << "Нет введённых чисел." << endl;
        return 0;
    }

    cout << "Количество: " << count << endl;
    cout << "Сумма: " << sum << endl;
    cout << "Среднее: " << sum / count << endl;
    cout << "Минимум: " << min_val << endl;
    cout << "Максимум: " << max_val << endl;
    return 0;
}