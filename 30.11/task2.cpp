#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int x;
    while (cin >> x && x != 0) {
        nums.push_back(x);
    }

    // Вывод в обратном порядке
    for (int i = nums.size() - 1; i >= 0; --i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}