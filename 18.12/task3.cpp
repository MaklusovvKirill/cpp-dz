#include <iostream>
#include <string>
using namespace std;

struct Student {
    string lastName;
    int grades[5];
    double averageGrade;
};

double calculateAverage(int grades[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += grades[i];
    }
    return sum / 5.0;
}

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        cout << "Введите фамилию студента " << i + 1 << ": ";
        cin >> students[i].lastName;
        cout << "Введите 5 оценок через пробел: ";
        for (int j = 0; j < 5; j++) {
            cin >> students[i].grades[j];
        }
        students[i].averageGrade = calculateAverage(students[i].grades);
    }

    int bestIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].averageGrade > students[bestIndex].averageGrade) {
            bestIndex = i;
        }
    }

    cout << "Лучший студент: " << students[bestIndex].lastName
         << " (средний балл: " << students[bestIndex].averageGrade << ")\n";

    return 0;
}