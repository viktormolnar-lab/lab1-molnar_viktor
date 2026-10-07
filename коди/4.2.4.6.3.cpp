#include <iostream>

using namespace std;

int main() {
    double grade1, grade2, grade3;
    cin >> grade1 >> grade2 >> grade3;

    double average = (grade1 + grade2 + grade3) / 3.0;

    cout << average << "\n";

    return 0;
}