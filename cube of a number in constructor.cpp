#include <iostream>
using namespace std;

class Cube 
{
private:
    int number;
public:
    Cube(int n) : number(n) {}
    void displayCube() {
        cout << "Cube of " << number << " is " << (number * number * number) << endl;
    }
    ~Cube(){
    	cout<<"finished displaying cube";
	}
};

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        Cube cube(i);
        cube.displayCube();
    }

    return 0;
}
