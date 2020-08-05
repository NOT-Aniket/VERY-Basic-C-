#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int n[a];
    n[0] = 0;
    n[1] = 1;
    for(int i = 0;i<(a-2);i++)
    {
        n[i+2] = n[i]  + n[i+1];
    }
    cout<<n[a];
    return  0;
}