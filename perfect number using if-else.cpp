#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	int i;
	cout<<"enter a number:";
	cin>>n;
	for(i=1; i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(n==sum)
	{
		cout<<n<<" "<<"is a perfect number";
	}
	else
	{
		cout << n<<" "<<"is not a perfect number";
	}
	return 0;
}