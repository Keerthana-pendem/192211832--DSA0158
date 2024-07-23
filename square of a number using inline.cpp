#include<iostream>
using namespace std;
inline int square(int x)
{
	return x*x;
}
int main(){
	int number;
	cout<<"enter a number:";
	cin>>number;
	int result= square(number);
	cout<<"square of a given number is"<<" "<<result<<endl;
	return 0;
}