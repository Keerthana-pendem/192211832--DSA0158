#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the number(a):";
	cin>>a;
	cout<<"enter the number(b):";
	cin>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"a and b after swapping are:"<<" "<<a<<" "<<b<<endl;
	return 0;
}
