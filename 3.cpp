#include<bits\stdc++.h>
using namespace std;
int main()
{
for(int i=0;i<5;i++)
{
	for(int j=5;j>i;j--)
	{
		cout<<" ";
	}
   for(int a=0;a<=i;a++)
   {
   	cout<<"*";
   }
   
cout<<endl;for(int j=5;j>i;j--)
	{
		cout<<" ";
	}
}
for(int m=0;m<4;m++)
{
	cout<<" ";
for(int s=0;s<=m;s++)
{
	cout<<" ";

}
for(int l=4;l>m;l--)
{
	cout<<"*";
}
cout<<endl;
}

	return 0;
}