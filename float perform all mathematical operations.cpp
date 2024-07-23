#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    float num1, num2;

    
    cout << "Enter the first floating-point number: ";
    cin >> num1;
    cout << "Enter the second floating-point number: ";
    cin >> num2;

    
    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    float division = num1 / num2;
    float modulo = fmod(num1, num2);
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulo: " << modulo << endl;
    return 0;
}