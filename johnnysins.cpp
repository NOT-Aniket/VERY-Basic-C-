#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
        cin>>n; 
    int a[10],l;
    for(int i=0;i<n;i++)
    {
       cin>>l;
       a[i]=l;
    }
    int k;
    cin>>k;
    for(int j=0;j<n;j++)
    {
        if(a[j]==k)
        {
            cout<<j<<endl;
            break;
        }
    }
    
    return 0;
}
