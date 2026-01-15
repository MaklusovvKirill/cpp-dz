#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int a[100][100];
    int flat[10000];

    int k = 0;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
            flat[k++] = a[i][j];
        }

    sort(flat, flat + k);

    k = 0;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            a[i][j] = flat[k++];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            cout << a[i][j] << " ";
        cout << "\n";
    }

    return 0;
}