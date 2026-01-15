#include <iostream>
using namespace std;

int main() {
    int arr[10] = {3, 7, -2, 9, -5, 1, 4, 8, -1, 6};
    int *ptr = arr;

    int found = -1;
    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) < 0) {
            found = i;
            break;
        }
    }

    if (found != -1)
        cout << "Первый отрицательный: " << *(ptr + found)
             << " на позиции " << found << endl;
    else
        cout << "Отрицательных нет\n";

    return 0;
}