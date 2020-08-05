#include<iostream>
using namespace std;
int main()
{
 int add,a,d,n,nth;
 cout<<"enter the value of a\n";
 cin>>a;
 cout<<"\nenter the value of d\n";
 cin>>d;
 cout<<"\nenter the nth term\n";
 cin>>nth;
 add=a;
 for(int i=1;i<=nth-1;i++)
{
	n=a+d;
	a=n;
	add=add+n;

}
cout<<"\nthe nth term is"<<n;



cout<<"\nthe sum is"<<add;

return 0;
}