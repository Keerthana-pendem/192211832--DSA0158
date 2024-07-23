#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    double division = static_cast<double>(num1) / num2;
    int modulo = num1 % num2;
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulo: " << modulo << endl;

    return 0;
}