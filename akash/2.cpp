#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int conv[n];
    set<long> s;
    for(int i=0;i<n;i++)
        {cin>>conv[i];s.insert(conv[i]);}
    /*if(k>n)
        cout<<k;*/
    if(s.size()>k)
        cout<<k<<endl;
    else
        cout<<s.size()<<endl;
    int c[k]={0};
    //set<long>::iterator itr=s.begin();
    for(int i=0;i<n;i++)
    {
       /*for(int m=0;m<k;m++)
            {
                cout<<c[m]<<" ";
            }
            cout<<endl;*/
        for(int j=0;j<k;j++)
        {
            if(c[j]==conv[i])
            {
                    break;
            }
            if(c[j]==0||j==k-1)
            {
                c[j]=conv[i];
                while(j>0)
                    {
                        int temp=c[j];
                        c[j]=c[j-1];
                        c[j-1]=temp;
                        j--;
                    }
                    break;


            }
        }


    }
    for(int i=0;((i<k)&&(c[i]!=0));i++)
    {
        cout<<c[i]<<" ";
    }






}
