#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
inline bool isPalindrome(const string& str) 
{
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return (str == reversed);
}
int main() 
{
   string input;
    char choice;
    do 
	{
    cout << "Enter a string to check if it's a palindrome: ";
  cin >> input;
        if (isPalindrome(input)) 
		{
         cout << "\"" << input << "\" is a palindrome." << endl;
        } 
		else 
		{
          cout << "\"" << input << "\" is not a palindrome." << endl;
        }
        cout << "Do you want to check another string? (y/n): ";
       cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (choice == 'y' || choice == 'Y');

    std::cout << "Exiting the program. Goodbye!" << std::endl;

    return 0;
}
