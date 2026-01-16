#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число: ";
    cin >> n;
    if (n % 2 == 0)
        cout << "Чётное" << endl;
    else
        cout << "Нечётное" << endl;
    return 0;
}