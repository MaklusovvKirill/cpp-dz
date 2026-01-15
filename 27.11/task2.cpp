#include <iostream>

int main() {
    for (int i = 1; i <= 6; ++i) {
        for (int j = 1; j <= 6; ++j) {
            int prod = i * j;
            if (prod % 3 == 0)
                std::cout << prod << " ";
            else
                std::cout << "- ";
        }
        std::cout << "\n";
    }

    return 0;
}