#include<iostream>
using namespace std;
int main()
{
    string s;int ones=0;
    cin>>s;
    //cout<<"size "<<s.length()<<" ";
    for(int i=0;i<s.length();i++)
    {
        //cout<<int(s[i])-48;
        if(int(s[i])-48)
        ones++;

    }
    //cout<<" "<<ones;
    if(ones==1)
        cout<<(s.length())/2-1+1;
    else if(ones>0)
        cout<<(s.length()-1)/2+1;
    else
      cout<<0;



}
