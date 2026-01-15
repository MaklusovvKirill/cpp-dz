#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int x;
    long long sum = 0; // чтобы избежать переполнения

    while (cin >> x && x != 0) {
        nums.push_back(x);
        sum += x;
    }

    if (nums.empty()) {
        cout << "0\n";
        return 0;
    }

    double avg = (double)sum / nums.size();
    vector<int> greater;

    for (int val : nums) {
        if (val > avg) {
            greater.push_back(val);
        }
    }

    cout << greater.size() << "\n";
    for (int i = 0; i < greater.size(); ++i) {
        if (i > 0) cout << " ";
        cout << greater[i];
    }
    if (!greater.empty()) cout << "\n";

    return 0;
}
