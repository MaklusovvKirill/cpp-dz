#include <iostream>
#include <algorithm>
using namespace std;

// Функция сравнения для сортировки по убыванию
bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int M, N;
    cin >> M >> N;

    int a[100][100];

    // Ввод
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            cin >> a[i][j];

    // Обрабатываем каждый столбец
    for (int j = 0; j < N; j++) {
        int col[100];
        // Копируем столбец
        for (int i = 0; i < M; i++)
            col[i] = a[i][j];
        // Сортируем по убыванию
        sort(col, col + M, cmp);
        // Записываем обратно
        for (int i = 0; i < M; i++)
            a[i][j] = col[i];
    }

    // Вывод
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}