#include<iostream>
using namespace std;
int main()
{
    int n;float sum=0.0;
    cin>>n;
    int a[n];float ans;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    ans=sum/float(n);
    cout<<ans;

}
