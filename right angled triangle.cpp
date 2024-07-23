  #include <iostream>
using namespace std;

class RightAngleTriangle {
private:
    int rows;

public:
    
    RightAngleTriangle() : rows(5) {
        cout << "Default constructor called. Rows: " << rows << "\n";
    }

    
    RightAngleTriangle(int r) : rows(r) {
        cout << "Parameterized constructor called. Rows: " << rows << "\n";
    }

    void printPattern() const {
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int choice, r;

    cout << "Choose pattern type:\n1. Default pattern (5 rows)\n2. Custom pattern\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
       
        RightAngleTriangle triangle1;
        triangle1.printPattern();
    } else if (choice == 2) {
        cout << "Enter the number of rows: ";
        cin >> r;

       
        RightAngleTriangle triangle2(r);
        triangle2.printPattern();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}