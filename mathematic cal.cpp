#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"enter two numbers:";
	cin>>a>>b;
	cout<<"enter choice:";
	cin>>ch;
	switch(ch)
	{
		case'+':
		cout<<"sum="<<" "<<a+b;
		break;
		case'-':
		cout<<"difference="<<" "<<a-b;
		break;
		case '*':
		cout<<"multiplication="<<" "<<a*b;
		break;
		case '/':
			cout<<"division="<<" "<<a/b;
			case '%':
				cout<<a%b;
				break;
				default:
					cout<<"invalid character:";
	}
	return 0;
}