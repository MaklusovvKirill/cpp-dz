#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // для случайных чисел

    std::vector<int> arr(10);
    for (int i = 0; i < 10; ++i) {
        arr[i] = rand() % 50 + 1; // от 1 до 50
    }

    std::cout << "Исходный массив: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";

    std::vector<int> even, odd;
    for (int x : arr) {
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }

    std::sort(even.begin(), even.end());       // чётные по возрастанию
    std::sort(odd.begin(), odd.end(), std::greater<int>()); // нечётные по убыванию

    int e = 0, o = 0;
    for (int& x : arr) {
        if (x % 2 == 0)
            x = even[e++];
        else
            x = odd[o++];
    }

    std::cout << "Преобразованный массив: ";
    for (int x : arr) std::cout << x << " ";
    std::cout << "\n";

    return 0;
}
