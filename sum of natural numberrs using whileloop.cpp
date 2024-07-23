#include<iostream>
using namespace std;
int main()
{
int n,sum=0;
int i=1;
cout<<"Enter a number:";
cin>>n;
while(i<=n)
{
	sum+=i;
	i++;
}
cout<<"Sum of "<<n<<" "<<"natural numbers is:"<<" "<<sum;
	return 0;
		}