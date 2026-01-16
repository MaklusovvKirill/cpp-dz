#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(const string& str) {
    string vowels = "аеёиоуыэюя";
    int count = 0;
    for (char c : str) {
        char lower = tolower(static_cast<unsigned char>(c));
        if (vowels.find(lower) != string::npos) {
            count++;
        }
    }
    return count;
}

void removeSpaces(string& str) {
    string result = "";
    for (char c : str) {
        if (c != ' ') result += c;
    }
    str = result;
}

bool isPalindrome(const string& original) {
    string clean = original;
    removeSpaces(clean);
    for (char& c : clean) {
        c = tolower(static_cast<unsigned char>(c));
    }
    string reversed = clean;
    reverse(reversed.begin(), reversed.end());
    return clean == reversed;
}

int main() {
    string test = "А роза упала на лапу Азора";

    cout << "Строка: \"" << test << "\"" << endl;
    cout << "Гласных: " << countVowels(test) << endl;

    string copy1 = test;
    removeSpaces(copy1);
    cout << "Без пробелов: \"" << copy1 << "\"" << endl;

    cout << "Палиндром: " << (isPalindrome(test) ? "да" : "нет") << endl;

    return 0;
}