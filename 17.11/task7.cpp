#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "программа";
    string guessed(word.length(), '_');
    int attempts = 0;
    char letter;

    cout << "Угадайте слово по буквам! Слово из " << word.length() << " букв." << endl;

    while (guessed != word && attempts < 10) {
        cout << "Текущее слово: " << guessed << endl;
        cout << "Введите букву: ";
        cin >> letter;

        bool found = false;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] == letter) {
                guessed[i] = letter;
                found = true;
            }
        }

        if (!found) {
            attempts++;
            cout << "Такой буквы нет. Попыток осталось: " << (10 - attempts) << endl;
        }
    }

    if (guessed == word)
        cout << "Поздравляем! Вы угадали слово: " << word << endl;
    else
        cout << "Вы проиграли. Загаданное слово: " << word << endl;

    return 0;
}