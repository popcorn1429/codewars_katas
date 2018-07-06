#include "buying_a_car.h"

int main() {
    auto v = BuyCar::nbMonths(2000, 8000, 1000, 1.5);
    cout << "result : ";
    for (int i : v) {
        cout << i << ',';
    }
    cout << endl;

    system("pause");
}