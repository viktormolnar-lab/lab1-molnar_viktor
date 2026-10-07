#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, h;
    cin >> r >> h;

    const double PI = acos(-1.0);
    double V = (1.0 / 3.0) * PI * r * r * h;

    cout << V << "\n";

    return 0;
}