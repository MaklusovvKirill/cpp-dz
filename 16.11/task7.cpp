#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double sum;
    cout << "Введите сумму покупки: ";
    cin >> sum;

    double discount = 0;
    if (sum > 10000)
        discount = 0.15;
    else if (sum >= 5000)
        discount = 0.10;
    else if (sum >= 1000)
        discount = 0.05;

    double total = sum * (1 - discount);
    cout << fixed << setprecision(2);
    cout << "К оплате: " << total << " руб." << endl;
    return 0;
}