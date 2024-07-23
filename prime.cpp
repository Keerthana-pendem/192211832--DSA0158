#include <iostream>
#include <cmath>
using namespace std;

class PrimeCheck {
private:
    int number;

   
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }

public:
    
    PrimeCheck(int n) : number(n) {}

    
    ~PrimeCheck() {
        cout << "Object destroyed" << endl;
    }


    void checkSumOfPrimes() {
        bool found = false;
        for (int i = 2; i <= number / 2; ++i) {
            if (isPrime(i) && isPrime(number - i)) {
                cout << number << " can be expressed as the sum of " << i << " and " << number - i << endl;
                found = true;
            }
        }
        if (!found) {
            cout << number << " cannot be expressed as the sum of two prime numbers." << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    PrimeCheck pc(n);
    pc.checkSumOfPrimes();

    return 0;
}
