#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr(15);
    std::cout << "Введите 15 чисел:\n";
    for (int i = 0; i < 15; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Введите число для удаления: ";
    int toRemove;
    std::cin >> toRemove;

    std::cout << "Массив до удаления: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";

    std::vector<int> newArr;
    for (int x : arr) {
        if (x != toRemove) {
            newArr.push_back(x);
        }
    }

    std::cout << "Массив после удаления: ";
    for (int x : newArr) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}