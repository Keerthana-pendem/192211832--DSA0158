#include <iostream>
using namespace std;

int main() {
    
    double salary, bonus, bonusPercentage;

    
    cout << "Enter the salary of the employee: ";
    cin >> salary;

    
    cout << "Enter the bonus percentage: ";
    cin >> bonusPercentage;

    
    bonus = salary * (bonusPercentage / 100);

    
    cout << "The bonus for the employee is: " << bonus << endl;

    return 0;
}
