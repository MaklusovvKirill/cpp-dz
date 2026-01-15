#include <iostream>
using namespace std;

int calculateSquare(int x) {
    return x * x;
}

int main() {
    int n;
    cin >> n;
    cout << calculateSquare(n) << endl;
    return 0;
}