#include <iostream>
using namespace std;
class Complex 
{
private:
    int real;
    int imag;
public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator + (const Complex& obj) 
	{
        return Complex(real + obj.real, imag + obj.imag);
    }
    Complex operator - (const Complex& obj) 
	{
        return Complex(real - obj.real, imag - obj.imag);
    }
    void input() 
	{
        cin >> real >> imag;
    }
    void print() 
	{
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() 
{
    Complex num1, num2, sum, difference;
    cout << "Enter the value of Complex Numbers a, b" << endl;
    num1.input();
    cout << "Enter the value of Complex Numbers a, b" << endl;
    num2.input();
    sum = num1 + num2;
    difference = num1 - num2;
    cout << "Input Values:" << endl;
    num1.print();
    num2.print();
    cout << "Result:" << endl;
    cout << "Sum: ";
    sum.print();
    cout << "Difference: ";
    difference.print();
    return 0;
}