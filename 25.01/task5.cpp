#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Student {
private:
    string name;
    int grades[5];
    double averageGrade;

public:
    Student(string n, int g0, int g1, int g2, int g3, int g4) {
        name = n;
        grades[0] = g0;
        grades[1] = g1;
        grades[2] = g2;
        grades[3] = g3;
        grades[4] = g4;
        calculateAverage();
    }

    void calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; i++) sum += grades[i];
        averageGrade = sum / 5.0;
    }

    void printInfo() {
        cout << "Студент: " << name << endl;
        cout << "Оценки: ";
        for (int i = 0; i < 5; i++) {
            cout << grades[i];
            if (i < 4) cout << ", ";
        }
        cout << endl;
        cout << "Средний балл: " << fixed << setprecision(1) << averageGrade << endl;
        cout << "Отличник: " << (hasExcellentGrades() ? "да" : "нет") << endl;
    }

    bool hasExcellentGrades() {
        for (int i = 0; i < 5; i++) {
            if (grades[i] < 8) return false;
        }
        return true;
    }

    void changeGrade(int index, int newGrade) {
        if (index >= 0 && index < 5) {
            grades[index] = newGrade;
            calculateAverage();
        } else {
            cout << "Неверный номер предмета!" << endl;
        }
    }

    double getAverage() const {
        return averageGrade;
    }

    string getName() const {
        return name;
    }
};

int main() {
    Student s1("Иванов И.И.", 8, 9, 7, 10, 9);
    Student s2("Петров П.П.", 6, 7, 8, 7, 8);
    Student s3("Сидорова А.А.", 9, 9, 9, 10, 10);

    s1.printInfo();
    cout << endl;
    s2.printInfo();
    cout << endl;
    s3.printInfo();

    Student students[] = {s1, s2, s3};
    int bestIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].getAverage() > students[bestIndex].getAverage()) {
            bestIndex = i;
        }
    }

    cout << "\nСтудент с наивысшим средним баллом: " << students[bestIndex].getName()
         << " (" << students[bestIndex].getAverage() << ")" << endl;

    return 0;
}