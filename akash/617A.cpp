#include<iostream>
using namespace std;
int main()
{
    int x,a[]={1,2,3,4,5},i=4,count1=0;
    cin>>x;
    while(1)
    {
        if(x-a[i]>=0)
            {x=x-a[i];count1++;}
        else
            i--;
        if(x==0)
            break;
    }
    cout<<count1;
}
