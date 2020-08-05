#include<iostream>
using namespace std;
int mul(int a[3][3],int b[3][3])
{
	int c[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{

         c[i][j]=a[j][i]*b[i][j];
		
		}
	}
	return c[3][3];
}
int main()
{
int a[3][3],k=0,l=0,b[3][3],c[3][3];
for(int i = 0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cin>>k;
		a[i][j]=k;
	}
}
for(int i = 0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		cin>>l;
		b[i][j]=l;
	}
}
c[3][3]=mul(a[3][3],b[3][3]);


	return 0;
}
