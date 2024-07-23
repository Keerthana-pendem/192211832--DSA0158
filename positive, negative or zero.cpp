#include<iostream>
using namespace std;
int main(){
	int n1;
	cout<<"enter the number:";
	cin>>n1;
	if(n1>0)
	{
		cout<<n1<<" "<<"is a positive number"<<endl;
	}
	else if(n1<0)
	{
		cout<<n1<<" "<<"is a negative number"<<endl;
	}
	else
	{
		cout<<"it is zero"<<endl;
	}
	return 0;
}