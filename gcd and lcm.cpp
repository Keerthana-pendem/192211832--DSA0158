#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int gcdValue = gcd(num1, num2);
    int lcmValue = lcm(num1, num2);

   cout << "GCD of " << num1 << " and " << num2 << " is: " << gcdValue << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcmValue << endl;

    return 0;
}