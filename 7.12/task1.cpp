#include <iostream>
using namespace std;

bool isPositive(int x) {
    return x > 0;
}

int main() {
    int n;
    cin >> n;
    if (isPositive(n))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}