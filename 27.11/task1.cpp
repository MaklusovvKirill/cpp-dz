#include <iostream>

int main() {
    int a[5][5];

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i == j)
                a[i][j] = 2;
            else if (j > i)
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }

    // Вывод
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << a[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}