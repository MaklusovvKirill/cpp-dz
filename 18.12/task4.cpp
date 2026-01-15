#include <iostream>
#include <string>
using namespace std;

struct FamilyMember {
    string name;
    double salary;
};

struct FamilyBudget {
    string surname;
    FamilyMember* members;
    int count;
    double totalIncome;
};

FamilyBudget inputFamily() {
    FamilyBudget fam;
    cout << "Введите фамилию семьи: ";
    cin >> fam.surname;
    cout << "Сколько членов семьи? ";
    cin >> fam.count;

    fam.members = new FamilyMember[fam.count];

    for (int i = 0; i < fam.count; i++) {
        cout << "Имя " << i + 1 << "-го члена: ";
        cin >> fam.members[i].name;
        cout << "Зарплата: ";
        cin >> fam.members[i].salary;
    }

    fam.totalIncome = 0;
    return fam;
}

void calculateTotalIncome(FamilyBudget& fam) {
    fam.totalIncome = 0;
    for (int i = 0; i < fam.count; i++) {
        fam.totalIncome += fam.members[i].salary;
    }
}

void printFamilyInfo(const FamilyBudget& fam) {
    cout << "\nСемья: " << fam.surname << "\n";
    for (int i = 0; i < fam.count; i++) {
        cout << fam.members[i].name << ": " << fam.members[i].salary << " руб.\n";
    }
    cout << "Общий доход: " << fam.totalIncome << " руб.\n";
}

int main() {
    FamilyBudget family = inputFamily();
    calculateTotalIncome(family);
    printFamilyInfo(family);

    delete[] family.members;

    return 0;
}