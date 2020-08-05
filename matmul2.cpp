#include<iostream>
using namespace std;

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
for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{

         c[i][j]=a[j][i]*b[i][j];
		
		}
	}
	
for(int i=0;i<3;i++)
{
	for(int j =0;j<3;j++)
	{
		cout<<c[i][j]<<" ";
	}

cout<<endl;}

	return 0;
}
