#include <iostream>
#include <cmath> 
using namespace std;
class CubeCalculator {
public:
    CubeCalculator() {
        int n;
        cout << "Enter an integer: ";
        cin >> n;
        calculateCubes(n);
    }
    CubeCalculator(int n) {
        calculateCubes(n);
    }

private:
    void calculateCubes(int n) {
        for (int i = 1; i <= n; ++i) {
            cout << "The cube of " << i << " is: " << pow(i, 3) << std::endl;
        }
    }
};
int main() {
    CubeCalculator defaultCalculator;
    int n;
    cout << "Enter another integer: ";
    cin >> n;
    CubeCalculator parameterizedCalculator(n);
    return 0;
}
