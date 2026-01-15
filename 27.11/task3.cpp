#include <iostream>

int main() {
    int days = 1;
    int calendar[6][7];

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (days <= 31)
                calendar[i][j] = days++;
            else
                calendar[i][j] = 0;
        }
    }

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (calendar[i][j] == 0)
                std::cout << "   ";
            else
                std::cout << calendar[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}