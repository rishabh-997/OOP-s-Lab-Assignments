#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int out[t],out1[t];
    for(int i=0;i<t;i++)
    {
        int n,k;
        int sum=0;
        cin>>n;
        int pr[n];
        for(int j=0;j<n;j++)
        {
            cin>>pr[j];
            sum=sum+pr[j];
        }
        k=sum/n;
        if((k*n)>=sum&&(k+1)*n>=sum)
        {
            out[i]=k;
        }
        else
            out[i]=k+1;

    }
    for(int i=0;i<t;i++)
    {cout<<out[i]<<endl;}
}
