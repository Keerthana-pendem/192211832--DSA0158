#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

  
    int* address = &number;

    cout << "The value of the variable is: " << number << endl;
    cout << "The address of the variable is: " << address << endl;

    return 0;
}