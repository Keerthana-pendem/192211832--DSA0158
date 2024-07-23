#include<iostream>
using namespace std;
int main(){
	int p,t,r;
	float si;
	cout<<"enter profit:";
	cin>> p;
	cout<<"enter time period:";
	cin>> t;
	cout<<" enter rate of intrest:";
	cin>> r;
	si=(p*t*r)/100;
	cout<<"simple intrest="<<" "<<si;
	return 0;
}