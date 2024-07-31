#include <iostream>
#include <stdexcept>
using namespace std;
void innerFunction() {
    try {
        cout << "Inner function: Throwing an exception." << endl;
        throw runtime_error("Exception from inner function");
    } catch (const runtime_error& e) {
        cout << "Inner function: Caught a runtime_error: " << e.what() << endl;
       cout << "Inner function: Rethrowing the exception." << endl;
        throw;
    }
}

void outerFunction() {
    try {
        innerFunction();
    } catch (const runtime_error& e) {
        cout << "Outer function: Caught a runtime_error: " << e.what() << endl;
    } catch (const std::exception& e) {
        cout << "Outer function: Caught a generic exception: " << e.what() << endl;
    }
}

int main() {
    try {
        outerFunction();
    } catch (const exception& e) {
        cout << "Main function: Caught a generic exception: " << e.what() << endl;
    }
cout << "End of program." <<endl;
    return 0;
}
