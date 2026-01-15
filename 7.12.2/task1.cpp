#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;
    cout << "До: a = " << a << ", b = " << b << endl;

    int *p1 = &a;
    int *p2 = &b;


    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "После: a = " << a << ", b = " << b << endl;
    return 0;
}