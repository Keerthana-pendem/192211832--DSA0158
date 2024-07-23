#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool isNumber(const std::string& str) 
{
    std::istringstream iss(str);
    double d;
    return iss >> d && iss.eof();
}
bool isPerfectNumber(int n) 
{
    if (n <= 0) return false;
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) 
	{
        if (n % i == 0) 
		{
            sum += i;
        }
    }  
    return sum == n;
}
int main() 
{
 string input;
    cout << "Enter a number: ";
  cin >> input;
    if (!isNumber(input)) 
	{
      cout << input << " is not a valid number." << endl;
    } 
	else 
	{
        double number = stod(input);
        if (number != static_cast<int>(number)) 
		{
 cout << number << " is not an integer." << endl;
        } 
		else 
		{
            int num = static_cast<int>(number);
            if (isPerfectNumber(num)) 
			{
               cout << num << " is a perfect number." << std::endl;
            } 
			else 
			{
           cout << num << " is not a perfect number." << std::endl;
            }
        }
    }
    
    return 0;
}
