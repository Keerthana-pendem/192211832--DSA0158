#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
int i=1;
cout<<"Enter a number:";
cin>>n;
while(i<n)
{
	if(n%i==0)
	{
	sum+=i;
}
i++;
}
if(n==sum)
{
	cout<<n<<"is a perfect number";
}
else
{
	cout<<n<<" "<<"is not a perfect number";	
}
	return 0;
		}