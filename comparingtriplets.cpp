#include<iostream>
using namespace std;
int compare(int a, int b){
    int c=0;
        if(a<b)
        {
            c=1;
        }
        else
        {
            c=2;
        }
        
    return c;
}
int main()
{
    int a[3],b[3],k=0;
    for(int j = 0;j<3;j++)
    {
        cin>>a[j];
    }
    for(int k = 0;k<3;k++)
    {
        cin>>b[k];
    }
    for(int i=0;i<3;i++)
    {
        k=compare(a[i],b[i]);
       if(k==1)
       {
           cout<<"alice won for round"<<" "<<i;
       }
    else
    {
        {
            cout<<"bob won the round"<<" "<<i;
        }
    }
    return 0;
    }
    
    return 0;
}

