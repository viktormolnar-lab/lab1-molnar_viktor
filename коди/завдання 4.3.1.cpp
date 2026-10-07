#include <iostream>

using namespace std;

int main() {
    int score;
    cin >> score;

    if (score >= 90 && score <= 100) {
        cout << "A\n";
    } else if (score >= 82 && score <= 89) {
        cout << "B\n";
    } else if (score >= 74 && score <= 81) {
        cout << "C\n";
    } else if (score >= 64 && score <= 73) {
        cout << "D\n";
    } else if (score >= 60 && score <= 63) {
        cout << "E\n";
    } else if (score >= 35 && score <= 59) {
        cout << "FX\n";
    } else if (score >= 1 && score <= 34) {
        cout << "F\n";
    } else {
        cout << "Некоректний бал\n";
    }

    return 0;
}