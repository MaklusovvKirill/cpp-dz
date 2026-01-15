#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr(12);
    std::cout << "Введите 12 чисел (можно с нулями):\n";
    for (int i = 0; i < 12; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Исходный массив: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";

    std::vector<int> result;
    int zeroCount = 0;

    for (int x : arr) {
        if (x == 0)
            zeroCount++;
        else
            result.push_back(x);
    }


    for (int i = 0; i < zeroCount; ++i) {
        result.push_back(0);
    }

    std::cout << "Массив после сортировки: ";
    for (int x : result) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
