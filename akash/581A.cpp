#include<iostream>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;
    int fir=(r<=b)?r:b;
    cout<<fir<<" ";
    int max1=(r+b)-2*fir;
    max1=max1/2;
    cout<<max1;

}
