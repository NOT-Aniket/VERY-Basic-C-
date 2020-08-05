#include<iostream>
using namespace std;
int main()
{
	int n,l;
	cout<<"Enter the number of terms in series\n";
	cin>>n;
    for(int i =0;i<=n;i++)
    {
    l=l+i;
    }
    cout<<l;
	return 0;
}