#include <iostream>
using namespace std;

void calculateRectangle(int length, int width) {
    int area = length * width;
    int perimeter = 2 * (length + width);
    cout << "Area: " << area << ", Perimeter: " << perimeter << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    calculateRectangle(a, b);
    return 0;
}