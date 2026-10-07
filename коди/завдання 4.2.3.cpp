#include <iostream>
#include <cmath>


using namespace std;

int main() {
    double a = 5.0, b = 6.0, c = 7.0;

    double p = (a + b + c) / 2.0;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = S / p;
    double R = (a * b * c) / (4.0 * S);

    double ha = (2.0 * S) / a;
    double hb = (2.0 * S) / b;
    double hc = (2.0 * S) / c;

    double ma = 0.5 * sqrt(2.0 * b * b + 2.0 * c * c - a * a);
    double mb = 0.5 * sqrt(2.0 * a * a + 2.0 * c * c - b * b);
    double mc = 0.5 * sqrt(2.0 * a * a + 2.0 * b * b - c * c);

    const double PI = acos(-1.0);
    double degA = acos((b * b + c * c - a * a) / (2.0 * b * c)) * 180.0 / PI;
    double degB = acos((a * a + c * c - b * b) / (2.0 * a * c)) * 180.0 / PI;
    double degC = acos((a * a + b * b - c * c) / (2.0 * a * b)) * 180.0 / PI;

    
    cout << "S = " << S << "\n";
    cout << "r = " << r << "\n";
    cout << "R = " << R << "\n\n";

    cout << "ha = " << ha << "\n";
    cout << "hb = " << hb << "\n";
    cout << "hc = " << hc << "\n\n";

    cout << "ma = " << ma << "\n";
    cout << "mb = " << mb << "\n";
    cout << "mc = " << mc << "\n\n";

    cout << "A = " << degA << " deg\n";
    cout << "B = " << degB << " deg\n";
    cout << "C = " << degC << " deg\n";

    return 0;
}
