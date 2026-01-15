#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr(8);
    std::cout << "Введите 8 чисел:\n";
    for (int i = 0; i < 8; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Сколько позиций сдвинуть вправо? ";
    int k;
    std::cin >> k;

    k = k % 8;

    std::cout << "Массив до сдвига: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";

    std::vector<int> shifted(8);
    for (int i = 0; i < 8; ++i) {
        shifted[(i + k) % 8] = arr[i];
    }

    std::cout << "Массив после сдвига: ";
    for (int x : shifted) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}