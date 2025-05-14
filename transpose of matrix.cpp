//program to find transpose of  a matrix
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],r,c;
	cout<<"enter values in matrix";
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cin>>a[r][c];
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			b[r][c]=a[c][r];
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<a[r][c];
		}
		cout<<"\n";
	}
	cout<<"Transpose of the matrix\n";
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<b[r][c];
		}
		cout<<"\n";
	}
	return 0;
}