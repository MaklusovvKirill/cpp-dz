#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите число для обратного отсчёта: ";
    cin >> n;
    if (n < 0) {
        cout << "Введите неотрицательное число." << endl;
        return 0;
    }
    while (n >= 0) {
        cout << n << " ";
        n--;
    }
    cout << endl;
    return 0;
}