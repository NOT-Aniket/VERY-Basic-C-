#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i = 1;i<=a;i++)
	{
		for(int j = a+1;j>i;j--)
		{
			cout<<" ";
		}
		for(int k=1;k<i;k++)
		{
			if(k==1||k==i-1)

			cout<<"*";
		else
			cout<<" ";
		}
cout<<endl;
	}
	for(int m = 0;m<a;m++)
		{cout<<"*";}
	return 0;
}