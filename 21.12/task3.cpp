#include <iostream>
#include <string>
using namespace std;

class LibraryItem {
protected:
    int id;
    string title;
    int year;
public:
    LibraryItem(int i, string t, int y) : id(i), title(t), year(y) {
        cout << "Конструктор LibraryItem\n";
    }
    virtual void printDescription() {
        cout << "ID: " << id << ", Название: " << title << ", Год: " << year << "\n";
    }
    virtual ~LibraryItem() {
        cout << "Деструктор LibraryItem\n";
    }
};

class Book : public LibraryItem {
protected:
    string author;
    int pageCount;
public:
    Book(int i, string t, int y, string a, int p)
        : LibraryItem(i, t, y), author(a), pageCount(p) {
        cout << "Конструктор Book\n";
    }
    void printDescription() override {
        LibraryItem::printDescription();
        cout << "Автор: " << author << ", Страниц: " << pageCount << "\n";
    }
    ~Book() {
        cout << "Деструктор Book\n";
    }
};

class ScientificBook : public Book {
    string field;
public:
    ScientificBook(int i, string t, int y, string a, int p, string f)
        : Book(i, t, y, a, p), field(f) {
        cout << "Конструктор ScientificBook\n";
    }
    void printDescription() override {
        Book::printDescription();
        cout << "Область науки: " << field << "\n";
    }
    ~ScientificBook() {
        cout << "Деструктор ScientificBook\n";
    }
};

int main() {
    cout << "--- Создание научной книги ---\n";
    ScientificBook sb(101, "Теория относительности", 1916, "А. Эйнштейн", 300, "Физика");
    
    cout << "\n--- Описание ---\n";
    sb.printDescription();

    cout << "\n--- Удаление объекта ---\n";
    return 0;
}