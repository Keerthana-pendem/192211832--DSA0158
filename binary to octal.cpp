#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class binaryTooctal{
	private:
		string binary;
		int decimal;
		string octal;
		void convertTodecimal(){
			decimal=0;
			int len=binary.length();
			for(int i=0;i<len;i++)
			{
				if(binary[len-1-i]=='1'){
					decimal+=pow(2,i);
				}
			}
		}
			void convertTooctal(){
				int temp=decimal;
				octal=" ";
				while(temp>0)
				{
					octal= to_string (temp%8)+octal;
					temp/8;
				}
			}
			public:
				binaryTooctal(const string &bin):binary(bin)
				{
					convertTodecimal();
					convertTooctal();
				}
				string getoctal()const{
					return octal;
				}
};
		int main()
		{
			string binary;
			cout<<"Enter in binary:";
			cin>>binary;
			binaryTooctal converter(binary);
			cout<<"The octal equivalent is:"<<converter.getoctal()<<endl;
			return 0;
		}