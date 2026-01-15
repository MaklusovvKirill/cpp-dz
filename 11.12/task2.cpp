#include <iostream>
using namespace std;

void unique(int* A, int *size) {
    if (*size == 0) return;

    int write = 1;
    for (int read = 1; read < *size; read++) {
        if (A[read] != A[read - 1]) {
            A[write] = A[read];
            write++;
        }
    }
    *size = write;
}

int main() {
    int N;
    cin >> N;
    int A[100];

    for (int i = 0; i < N; i++)
        cin >> A[i];

    unique(A, &N);

    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
    cout << endl;

    return 0;
}