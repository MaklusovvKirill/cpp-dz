#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>

using namespace std;

int main() {
    const int N = 3, M = 4;

    cout << "1. Массив, заполненный нулями:\n";
    int** arr1 = new int*[N];
    for (int i = 0; i < N; i++) {
        arr1[i] = new int[M];
        for (int j = 0; j < M; j++) {
            arr1[i][j] = 0;
            cout << arr1[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < N; i++)
        delete[] arr1[i];
    delete[] arr1;

    cout << "\n2. Массив, заполненный числами от 1 до N*M:\n";
    int** arr2 = new int*[N];
    int num = 1;
    for (int i = 0; i < N; i++) {
        arr2[i] = new int[M];
        for (int j = 0; j < M; j++) {
            arr2[i][j] = num++;
            cout << arr2[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < N; i++)
        delete[] arr2[i];
    delete[] arr2;

    srand(time(0));
    cout << "\n3. Случайный массив и сумма элементов:\n";
    int** arr3 = new int*[N];
    int sum = 0;
    for (int i = 0; i < N; i++) {
        arr3[i] = new int[M];
        for (int j = 0; j < M; j++) {
            arr3[i][j] = rand() % 100 + 1;
            sum += arr3[i][j];
            cout << arr3[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Сумма всех элементов: " << sum << "\n";

    for (int i = 0; i < N; i++)
        delete[] arr3[i];
    delete[] arr3;

    cout << "\n4. Суммы строк и столбцов:\n";
    int** arr4 = new int*[N];
    for (int i = 0; i < N; i++) {
        arr4[i] = new int[M];
        for (int j = 0; j < M; j++) {
            arr4[i][j] = rand() % 10 + 1;
            cout << arr4[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < M; j++)
            rowSum += arr4[i][j];
        cout << "Сумма строки " << i << ": " << rowSum << "\n";
    }

    for (int j = 0; j < M; j++) {
        int colSum = 0;
        for (int i = 0; i < N; i++)
            colSum += arr4[i][j];
        cout << "Сумма столбца " << j << ": " << colSum << "\n";
    }

    for (int i = 0; i < N; i++)
        delete[] arr4[i];
    delete[] arr4;

    cout << "\n5. Минимум и максимум:\n";
    int** arr5 = new int*[N];
    for (int i = 0; i < N; i++) {
        arr5[i] = new int[M];
        for (int j = 0; j < M; j++) {
            arr5[i][j] = rand() % 100 + 1;
            cout << arr5[i][j] << " ";
        }
        cout << "\n";
    }

    int minVal = INT_MAX, maxVal = INT_MIN;
    int minI = 0, minJ = 0, maxI = 0, maxJ = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (arr5[i][j] < minVal) {
                minVal = arr5[i][j];
                minI = i;
                minJ = j;
            }
            if (arr5[i][j] > maxVal) {
                maxVal = arr5[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }

    cout << "Минимум: " << minVal << " в [" << minI << "][" << minJ << "]\n";
    cout << "Максимум: " << maxVal << " в [" << maxI << "][" << maxJ << "]\n";

    for (int i = 0; i < N; i++)
        delete[] arr5[i];
    delete[] arr5;

    return 0;
}