#include <iostream>
using namespace std;
class Number {
public:
    virtual void printSequence(int M, int N, int K) = 0; 
};

class Skipper : public Number {
public:
    void printSequence(int M, int N, int K) override {
        for (int i = M; i <= N; i += (K + 1)) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    int M, N, K;
    cout << "Enter the start number (M): ";
    cin >> M;
    cout << "Enter the end number (N): ";
    cin >> N;
    cout << "Enter the number of skips (K): ";
    cin >> K;

    Skipper skipper;
    skipper.printSequence(M, N, K);

    return 0;
}