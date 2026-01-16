#include <iostream>
using namespace std;

int main() {
    const int N = 3;
    int matrix[N][N];

    cout << "Введите 9 чисел для матрицы 3x3:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum_main = 0;
    for (int i = 0; i < N; i++) {
        sum_main += matrix[i][i];
    }

    int sum_secondary = 0;
    for (int i = 0; i < N; i++) {
        sum_secondary += matrix[i][N - 1 - i];
    }

    int total_sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            total_sum += matrix[i][j];
        }
    }

    bool symmetric = true;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    cout << "Сумма главной диагонали: " << sum_main << endl;
    cout << "Сумма побочной диагонали: " << sum_secondary << endl;
    cout << "Сумма всех элементов: " << total_sum << endl;
    cout << "Матрица симметрична: " << (symmetric ? "да" : "нет") << endl;

    return 0;
}