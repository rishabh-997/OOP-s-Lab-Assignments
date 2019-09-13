/**
-----------------------------------Control Flow----------------------------
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

/**
-----------------------------------If and Else----------------------------

    Every programming language includes way of making choices.
    all if, else if, else return a boolean value.
    Each statement can either be a single statement or a block of statement enclosed in braces.
    else if and else parts are optional and any no of else if part can be given
    The conditions are checked one by one and conditions are tested one by one.
    All the other statements are skipped prior to one of the is/ else if
*/

/**
-----------------------------------Switch----------------------------

    switch statement provides an efficient way to distinguish between many options.
    argument of switch can be any integral type or character.
    the default is executed if none of cases matches/.
*/
/**
-----------------------------------While----------------------------
while(true){
    increment;
    conditions;
}

*/
int sum = 0,i=0;
while(i<100)
{
    sum+=i;
    i++;
}
cout<<sum<<endl;

/**
-----------------------------------do While----------------------------
similar to while but condition is first tested

do{
    increment;
    conditions;
}while(true)

*/
int sum1=0,i1=0;
do{
    sum1 += i1;
    i1++;
}while(i1<100);
cout<<sum1<<endl;

/**
-----------------------------------For----------------------------
many loops involves using same elements, problem of initialization, condition under which we continue loop statements;
although loop variable is declared outside the curly braces of for loop , the compiler read it as if it were local variable in loop.

for(initialize;condition;increment){
    body;
}
*/
int sum3 = 0;
for(int x = 0;x<100;x++){
    sum3 += x;
}
cout<<sum3<<endl;

/**
-----------------------------------Break and Continue----------------------------
        c++ provides statements to change control loops including break and continue and return statements.
        continue causes execution to skip to end of loop, ready to start a new statement;

*/
for(int x=0;x<100;x++){
    if(x==70)
        break;
    else if(x<50)
        continue;
    else
        cout<<x<<" ";
}
}
