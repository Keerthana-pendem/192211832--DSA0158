#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter the character to check:";
	cin>> ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
	ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<ch<<" "<<"is a vowel"<<endl;
	}
	else if ((ch >='a'&& ch<='z') || (ch>='A'&& ch<='Z'))
	{
		cout<<ch<<" "<<"is a consonant"<<endl;
	}
	else
	{
		cout<<"given input is invalid"<<endl;
	}
	return 0;
}