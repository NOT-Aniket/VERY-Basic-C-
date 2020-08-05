#include<iostream>
using namespace std;
float output(float left,float middle)
{
      float q=0;
      q=middle/left;
return q;
}

int main()
{
	float cr,in2,in,n,op;
cout<<"Enter the left and the middle part \n";
cin>>op;
cout<<"\n";
cin>>n;
in=output(op,n);

cout<<"the quotient is"<<in;

	return 0;
}