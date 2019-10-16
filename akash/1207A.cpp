#include<iostream>
using namespace std;
int main()
{
    struct burger{
        int price,quant; //price of burger, pr
    };
    burger ham,chick,e,max1,min1;
    int t;
    cin>>t;
    int sol[t];
    for(int i=0;i<t;i++)
    {
        int buns;
        cin>>buns>>ham.quant>>chick.quant>>ham.price>>chick.price;
        buns/=2;
        max1=(ham.price>chick.price)?ham:chick;
        min1=(ham.price<chick.price)?ham:chick;
        if(buns<max1.quant)
            sol[i]=max1.price*buns;
        else if((buns>max1.quant&&buns>min1.quant)&&buns<(max1.quant+min1.quant))
            sol[i]=max1.price*max1.quant+min1.price*(buns-max1.quant);
        else if ((buns>max1.quant&&buns>min1.quant)&&buns>=(max1.quant+min1.quant))
            sol[i]=max1.price*max1.quant+min1.price*min1.quant;
    }
    for(int i=0;i<t;i++)
    cout<<sol[i]<<endl;





}
