#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i = 1;i<=a;i++)
	{
		for(int j = 2;j<=i;j++)
		{
			if(j==2||j==i)
			cout<<"*";
		else
		{
			cout<<" ";
		}
		}
		cout<<endl;
	}for(int m=1;m<=a;m++)
	{
		cout<<"*";
	}
	return 0;
}