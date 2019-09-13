
/**
-----------------------------------Inline Functions----------------------------
*/
#include<bits/stdc++.h>
using namespace std;

inline int min (int x, int y){
    return (x<y?x:y);
}

int main(){

    /**
        basically faster if iterations are very highs.....
    */
    for(int i=0;i<1000;i++)
        cout<<min(i,i+1);
}
