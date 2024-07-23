#include <iostream>
using namespace std;

class CubeCalculator {
private:
    int number;

public:
    
    CubeCalculator(int n) : number(n) {
        int cube = n * n * n;
        cout << "The cube of " << n << " is " << cube << endl;
    }
};

int main() {
    CubeCalculator calc1(3);    
    CubeCalculator calc2(4);    

    return 0;
}
