#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
    cout << "Старт!" << endl;
    return 0;
}
