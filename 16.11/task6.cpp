#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введите три стороны треугольника: ";
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "не треугольник" << endl;
    } else if (a == b && b == c) {
        cout << "равносторонний" << endl;
    } else if (a == b || b == c || a == c) {
        cout << "равнобедренный" << endl;
    } else {
        cout << "разносторонний" << endl;
    }
    return 0;
}