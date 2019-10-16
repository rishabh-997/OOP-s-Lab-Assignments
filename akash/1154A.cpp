#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int val[4],i;
    int a_b,a_c,b_c,a_b_c;
    for(i=0;i<4;i++)
        cin>>val[i];
    sort(val,val+4);
    /*for(i=0;i<4;i++)
        cout<<val[i];*/
    a_b_c=val[3];
    cout<<val[3]-val[1]<<" "<<val[0]-(val[3]-val[1])<<" "<<val[2]-(val[3]-val[1]);


}
