#include<iostream>
using namespace std;
class cubecal{
	private:
		int number;
		int cube;
		public:
			cubecal(int n): number(n), cube(n * n * n) {}
			
			~cubecal()
			{
				cout<<"the cube of "<< number<<" " << "is" <<" "<< cube <<endl;
			}
			
			};
			int main(){
			
			{
				cubecal(4);
			return 0;
		}
		
