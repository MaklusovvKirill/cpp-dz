#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите число N: ";
    cin >> N;

    long long sum = 0, product = 1;
    for (int i = 1; i <= N; i++) {
        sum += i;
        product *= i;
    }

    cout << "Сумма: " << sum << endl;
    cout << "Произведение: " << product << endl;
    return 0;
}
