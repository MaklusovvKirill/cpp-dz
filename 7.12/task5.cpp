#include <iostream>
using namespace std;

double calculator(double a, double b, char op) {
    if (op == '+') return a + b;
    if (op == '-') return a - b;
    if (op == '*') return a * b;
    if (op == '/' && b != 0) return a / b;
    return 0;
}

int main() {
    double x, y;
    char op;
    cin >> x >> y >> op;
    cout << calculator(x, y, op) << endl;
    return 0;
}