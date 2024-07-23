#include<iostream>
using namespace std;
int main() 
{
    double n;
    cout << "Enter the number: ";
    cin >> n;
    if (n < 0) 
	{
        cout << "Negative number, square root is not real." << endl;
    } 
	else 
	{
        double half = n / 2;
        double square;
        while (true) 
		{
            square = 0.5 * (half + n / half);
            if ((square - half) < 0.00001) 
			{
                break;
            }
           half = square;
        }
        cout << "The approximate square root of " << n << " is: " <<square << endl;
    }
    return 0;
}