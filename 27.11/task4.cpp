#include <iostream>

int main() {
    int M, N;
    std::cout << "Введите M и N: ";
    std::cin >> M >> N;

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j) {
            int value = i * i + j * j;
            std::cout << value << " ";
        }
        std::cout << "\n";
    }

    return 0;
}