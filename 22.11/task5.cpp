#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите количество чисел Фибоначчи: ";
    cin >> N;

    if (N <= 0) return 0;

    long long a = 0, b = 1;
    cout << a << " ";
    if (N == 1) return 0;

    cout << b << " ";
    for (int i = 2; i < N; i++) {
        long long next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
