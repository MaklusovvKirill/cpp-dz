#include <iostream>
using namespace std;

int main() {
    int hour;
    cout << "Введите час (0-23): ";
    cin >> hour;
    if (hour >= 0 && hour <= 5)
        cout << "Ночь" << endl;
    else if (hour <= 11)
        cout << "Утро" << endl;
    else if (hour <= 17)
        cout << "День" << endl;
    else if (hour <= 23)
        cout << "Вечер" << endl;
    else
        cout << "Некорректный час" << endl;
    return 0;
}