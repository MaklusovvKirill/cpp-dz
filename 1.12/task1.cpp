#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int a[100][100];

    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];

    cout << "Исходная:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    for (int i = 0; i < M; i++)
        sort(a[i], a[i] + N);

    cout << "Отсортированная:\n";
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}