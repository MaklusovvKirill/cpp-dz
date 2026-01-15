#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    int year;
    int pages;
};

void printBookInfo(Book b) {
    cout << "Название: " << b.title
         << ", Автор: " << b.author
         << ", Год: " << b.year
         << ", Страниц: " << b.pages << "\n";
}

int main() {
    Book books[3] = {
        {"Война и мир", "Л. Толстой", 1869, 1225},
        {"1984", "Дж. Оруэлл", 1949, 328},
        {"Гарри Поттер", "Дж. Роулинг", 1997, 400}
    };

    for (int i = 0; i < 3; i++) {
        printBookInfo(books[i]);
    }

    return 0;
}