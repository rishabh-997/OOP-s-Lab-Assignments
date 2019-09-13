/**
-----------------------------------CASTING----------------------------
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

/**
    Casting is an operation that allows us to change the type of variable.
    We can either cast wrt to fundamental types or we can cast wrt class, objects, pointers
    Casting of int to double is normal as no info is lost.
    Casting of double to int is dangerous as fraction part is lost.
    For this reason, cpp provides number o operators to make it easy.

*/

/**
    -----------------------------------Explicit CASTING----------------------------
    we use "variable = static_cast<desired_type> (desired input);"
*/

int pussy = 1;
double kutta = (double) pussy;  //traditional C-Type casting
double suwar = double(pussy);     //C++ type casting
int i1=11;
int i2=12;
double result1 = i1/i2;                 //0
double result2 = double(i1)/double(i2); //0.98985
double result3 = double(i1/i2);         //0
cout<<endl<<endl;
cout<<result1<<endl<<result2<<endl<<result3;

double e = 3.14;
int f = static_cast<int> (e);
cout<<f;

/**
    -----------------------------------Implicit CASTING----------------------------
    There are many instance where program has not expected an explicit casting, but a change of type is required.
    In many of these cases, c++ performs an implicit cast.
    that is, the compiler automatically inserts a cast into machine generated code.
    A general rule with casting is to to play safe.
*/
int i11 = 3;
double d1 = 4.8;
double d2 = i11/d1; //equivalent to double(i)/d; = 0.625
int i3 = d3;      //kat jayega. = 0


}
