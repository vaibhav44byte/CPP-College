//multillication  of  2 matrix
#include<iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],d[3][3],r,c,z;
	cout<<"enter values in matrix a\n";
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cin>>a[r][c];
		}
	}
	cout<<"enter values of matrix b\n";
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cin>>b[r][c];
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			for(z=0;z<3;z++)
			{
				d[r][c]=d[r][c]+a[r][z]*b[z][c];
			}
		}
	}
	cout<<"The multiplication  of matrix a and b\n";
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			cout<<d[r][c]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}