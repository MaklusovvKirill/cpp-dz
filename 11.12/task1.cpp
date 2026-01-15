#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1001];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int k, x;
    cin >> k >> x;

    for (int i = n; i > k; i--)
        a[i] = a[i - 1];

    a[k] = x;
    n++;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}