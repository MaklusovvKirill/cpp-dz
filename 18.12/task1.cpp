#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void printPoint(Point p) {
    cout << "(" << p.x << "; " << p.y << ")\n";
}

int main() {
    Point p1 = {3, 5};
    Point p2 = {-2, 7};

    printPoint(p1);
    printPoint(p2);

    return 0;
}