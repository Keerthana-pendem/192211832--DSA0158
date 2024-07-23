#include<iostream>
#include<cctype>
#include<string>
using namespace std;
bool isvalid(const string &mail) 
{
	if(mail.length()<6||mail.length()>12) 
	{
		return false;
	}
	for(char ch:mail) 
	{ 
		if(!isalnum(ch)) {
			return false;
		}
	}
	return true;
}
int main()
{
	string un;
	cout<<"Enter a username:";
	cin>>un;
	if(isvalid(un))
	{
		cout<<"The username is valid"<<endl;
	}
	else{
		cout<<"The username is invalid"<<endl;
	}
	return 0;
}