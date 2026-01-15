#include <iostream>
using namespace std;

void findMinMax(int *a, int *b, int *c, int *minOut, int *maxOut) {
    int minVal = *a, maxVal = *a;
    if (*b < minVal) minVal = *b;
    if (*c < minVal) minVal = *c;
    if (*b > maxVal) maxVal = *b;
    if (*c > maxVal) maxVal = *c;

    *minOut = minVal;
    *maxOut = maxVal;
}

int main() {
    int x = 10, y = -3, z = 7;
    int minResult, maxResult;

    findMinMax(&x, &y, &z, &minResult, &maxResult);

    cout << "Min: " << minResult << ", Max: " << maxResult << endl;
    return 0;
}