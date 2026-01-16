#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Введите оценку (0-100): ";
    cin >> score;
    if (score >= 90 && score <= 100)
        cout << "A" << endl;
    else if (score >= 80)
        cout << "B" << endl;
    else if (score >= 70)
        cout << "C" << endl;
    else if (score >= 60)
        cout << "D" << endl;
    else if (score >= 0)
        cout << "F" << endl;
    else
        cout << "Некорректная оценка" << endl;
    return 0;
}