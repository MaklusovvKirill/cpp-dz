#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = 1 + rand() % 100;
    int guess;

    cout << "Угадайте число от 1 до 100:" << endl;
    do {
        cin >> guess;
        if (guess < secret)
            cout << "Больше!" << endl;
        else if (guess > secret)
            cout << "Меньше!" << endl;
    } while (guess != secret);

    cout << "Поздравляем! Вы угадали!" << endl;
    return 0;
}