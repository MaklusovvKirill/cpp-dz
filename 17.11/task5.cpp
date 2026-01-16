#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "secret";
    string input;
    int attempts = 0;

    while (attempts < 3) {
        cout << "Введите пароль: ";
        cin >> input;
        if (input == password) {
            cout << "Доступ разрешён!" << endl;
            return 0;
        }
        attempts++;
        cout << "Неверный пароль. Осталось попыток: " << (3 - attempts) << endl;
    }
    cout << "Превышено количество попыток. Доступ запрещён." << endl;
    return 0;
}