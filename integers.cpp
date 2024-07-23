 #include <iostream>
using namespace std;

class DivisibleByNine {
private:
    int count;
    int sum;

    void calculate() {
        count = 0;
        sum = 0;
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                ++count;
                sum += i;
            }
        }
    }

public:

    DivisibleByNine() {
        calculate();
        cout << "Constructor called.\n";
    }

  
    ~DivisibleByNine() {
        cout << "Destructor called.\n";
    }

    void displayResults() const {
       cout << "Number of integers divisible by 9 between 100 and 200: " << count << endl;
     cout << "Sum of these integers: " << sum << endl;
    }
};

int main() {
    
    DivisibleByNine obj;
    obj.displayResults();

    return 0;
}