#include<iostream>
using namespace std;
int main()
{
	double num;
	cout<<"Enter a number:\n";
	cin>>num;
    if(num<0)
    {
    	cout<<"Cube root of"<<num<<"is not real";
	}
	else if(num==0||num==1)
	{
		cout<<"Cube root of"<<num<<"is:"<<num;
	}
	else
	{
		double cub_num=num/3;
		double temp;
		do{
			temp=cub_num;
			cub_num=(2*temp+(num/(temp*temp)))/3;
		}
		while(abs(temp-cub_num)>0.0001);
		cout<<"Cube root of"<<" "<<num<<" "<<"is:"<<" "<<cub_num;
	}
	return 0;
		}