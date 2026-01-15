#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int M, N;
    cin >> M >> N;

    int a[100][100];

    for (int i = 0; i < M; ++i)
        for (int j = 0; j < N; ++j)
            cin >> a[i][j];

    for (int j = 0; j < N; ++j) {
        int col[100];
        for (int i = 0; i < M; ++i)
            col[i] = a[i][j];
        sort(col, col + M, cmp);
        for (int i = 0; i < M; ++i)
            a[i][j] = col[i];
    }

    for (int i = 0; i < M; ++i) {
        for (int j = 0; j < N; ++j)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}