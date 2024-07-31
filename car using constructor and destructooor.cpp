#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string make;
    string model;
    int year;
public:
    Car(string carMake, string carModel, int carYear) : make(carMake), model(carModel), year(carYear) {
        cout << "Car created: " << make << " " << model << " (" << year << ")" << endl;
    }
    ~Car() {
        cout << "Car destroyed: " << make << " " << model << " (" << year << ")" << endl;
    }
    void display() const {
        std::cout << "Car details: " << make << " " << model << " (" << year << ")" << endl;
    }
};
int main() {
    Car myCar("hyundai", "nex gen 5", 2023);
    myCar.display();
    return 0;
}
