#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int N = 10;
    int arr[N];
    
    srand(time(0));

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100 + 1;
    }

    cout << "Массив: [";
    for (int i = 0; i < N; i++) {
        cout << arr[i];
        if (i < N - 1) cout << ", ";
    }
    cout << "]" << endl;

    int min_val = arr[0], max_val = arr[0], sum = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
        sum += arr[i];
    }

    double avg = static_cast<double>(sum) / N;

    cout << "Максимальный элемент: " << max_val << endl;
    cout << "Минимальный элемент: " << min_val << endl;
    cout << "Среднее арифметическое: " << avg << endl;

    return 0;
}