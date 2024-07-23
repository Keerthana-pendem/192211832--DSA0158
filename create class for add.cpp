#include <iostream>
using namespace std;

class Add 
{
private:
    int value;
public:
    Add() : value(0) {} 
    Add(int v) : value(v) {} 
    Add operator + (const Add& other) 
	{
        return Add(this->value + other.value);
    }
    void display() 
	{
        cout << "Sum: " << value << endl;
    }
};

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Add a1(num1);
    Add a2(num2);

    Add result = a1 + a2;
    result.display();

    return 0;
}
