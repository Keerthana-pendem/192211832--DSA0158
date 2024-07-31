#include<iostream>
using namespace std;
int main(){
	int factorial=1;
	int n;
	cout<<"enter the number:";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	cout<<"the factorial of a number is:"<<" "<<factorial<<endl;
	return 0;
}