#include<iostream>
using namespace std;
void swapbyvalue(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
}
void swapbyreference(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n1,n2;
	cout<<"enter two numbers:";
	cin>>n1,n2;
	cout<<"before swapping using call by val:"<<endl;
	cout<<"a="<<n1<<"and"<<"b="<<n2<<endl;
	swapbyvalue(n1,n2);
	cout<<"after swapping by using call by val:"<<endl;
	cout<<"a="<<n1<<"and"<<"b="<<n2<<endl;
	cout<<"before swapping call by ref:"<<endl;
	cout<<"a="<<n1<<"and"<<"b="<<n2<<endl;
	swapbyreference(n1,n2);
	cout<<"after swapping using call by ref:"<<endl;
	cout<<"a="<<n1<<"and"<<"b="<<n2<<endl;
	return 0;
}
