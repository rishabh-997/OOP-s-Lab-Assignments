#include<iostream>
using namespace std;
int main()
{
    int str,inte,exp,t,i;
    cin>>t;
    int a[t]={0};
    for(i=0;i<t;i++)
    {
        int c=0;
        cin>>str>>inte>>exp;
        if(str+exp>inte)
        {
            if((str+exp-inte)%2!=0)
            {if(((str+exp-inte)/2)+1>exp)
                a[i]=exp+1;
            else
                a[i]=((str+exp-inte)/2)+1;
            }
            else
            {
                if(((str+exp-inte)/2)>exp)
                a[i]=exp+1;
                else
                a[i]=((str+exp-inte)/2);
            }
        }
        else
            a[i]=0;
    }
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<endl;
    }
}

