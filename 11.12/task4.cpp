#include <iostream>
using namespace std;

int* sum_arrays(int *a, int *b, int n) {
    int* res = new int[n];
    for (int i = 0; i < n; i++)
        res[i] = a[i] + b[i];
    return res;
}

int main() {
    int n;
    cin >> n;

    int* a = new int[n];
    int* b = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int* sum = sum_arrays(a, b, n);

    for (int i = 0; i < n; i++)
        cout << sum[i] << " ";
    cout << endl;

    delete[] a;
    delete[] b;
    delete[] sum;

    return 0;
}