#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int i=0,n,count1=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        count1=count1+(a[n-1]-a[i]);
    }
    cout<<count1;

}
