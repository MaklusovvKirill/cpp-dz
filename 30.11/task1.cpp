#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    vector<int> even, odd;
    for (int x : A) {
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }

    for (int x : even) cout << x << " ";
    for (int x : odd) cout << x << " ";
    cout << endl;

    return 0;
}
