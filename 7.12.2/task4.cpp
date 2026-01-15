#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int *start = arr;
    int *end = arr + 7;

    cout << "Обратный порядок: ";
    while (end >= start) {
        cout << *end << " ";
        end--;
    }
    cout << endl;

    return 0;
}