#include<iostream>
using namespace std;

class cubecal{
	private:
		int number;
		public:
			cubecal(): number(0)
			{
				cout<<"the cube of 0 is 0"<<endl;
			}
			cubecal(int n): number(n)
			{
				int cube= n*n*n;
				cout<<" cube of"<<" "<<n <<" "<<"is"<<" "<<cube<<endl;
			}
			cubecal(float n): number(static_cast<int>(n))
			{
				float cube= n*n*n;
				cout<<"cube of"<<" "<<n<<" "<<"is"<<" "<<cube<<endl;
			}
};
int main()
{
	cubecal calc1;
	cubecal calc2(4);
	return 0;
}