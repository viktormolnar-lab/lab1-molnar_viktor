#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cin >> num1 >> num2 >> op;

    switch (op) {
        case '+':
            cout << num1 + num2 << "\n";
            break;
        case '-':
            cout << num1 - num2 << "\n";
            break;
        case '*':
            cout << num1 * num2 << "\n";
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 / num2 << "\n";
            } else {
                cout << "Помилка: ділення на нуль!\n";
            }
            break;
        default:
            cout << "Невідома операція!\n";
            break;
    }

    return 0;
}