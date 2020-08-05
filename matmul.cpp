#include<iostream>
using namespace std;
int input(int n)
{
int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
	        {
	        	cin>>n;
                a[i][j]=n;
	        }
	}
	return a[3][3];
}
int main()
{
	cout<<"youre making a 3x3 matrix";
	int a[3][3],n=0;
	a[3][3]=input(n);
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
	        {
	        	cout<<a[i][j]<<"  ";
                
	        }
	        cout<<endl;
	    }
	return 0;
}
