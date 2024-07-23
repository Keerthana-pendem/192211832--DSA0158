#include <iostream>
using namespace std;
class Box 
{
public:
    static int objectCount; 
    Box() 
	{
        objectCount++;
    }
    static int getObjectCount() 
	{
        return objectCount;
    }
};
int Box::objectCount = 0;
int main() 
{
    Box box1;
    Box box2;
    Box box3;
    std::cout << "Number of objects created: " << Box::getObjectCount() << std::endl;
    return 0;
}
