#include<iostream>
using namespace std;
void addMatrices(int mat1[][10],int mat2[][10], int rows, int cols, int result[][10])
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			result[i][j]=..mat1[i][j]+ mat2[i][j];
		}
	}
}
int main()
{
	int rows,cols;
	cout<<"enter the no. of rows and cols:";
	cin>>rows>>cols;
	int mat1[10][10],  mat2[10][10], result[10][10];
	cout<<"enter the elements in matrix 1:\n";
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cin>>mat1[i][j];
		}
	}
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cin>>mat2[i][j];
		}
	}
	addMatrices(mat1, mat2, rows, cols, result);
	cout<<"resultant matrix after addition:\n";
	for(int i=0; i<rows; i++)
	{
		for(int j=0; j<cols; j++)
		{
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}