/**
-----------------------------------Functions----------------------------
*/
#include<bits/stdc++.h>
using namespace std;
//call by value
bool evensum(int a[], int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
        a[i]++;
    }
    if(sum%2 == 0)
        return true;
    return false;
}
//call by reference
void f(int value, int &ref ){
    value++;
    ref++;
    cout<<value<<endl<<ref<<endl;
}
int main(){

/**
    parameters serves as a list of placeholders for values that will be passes into functions.
    the argument list is given as a comma separated list, enclosed in parentheses where each entry consists of name of argument and type.

    return_type function_name(parameters){
        function body ,i.e, set of computations.
    }

    the function declaration must appear in every file that invokes the function.
    but the definition must appear only once;


    -------------------------Argument Passing---------------------------
    1. by default the arguments are passed by value;
    2. Sometimes, it is useful for a function to modify one of its arguments. To do so, you can explicitly define the argument to be reference type
    3. This is called "pass by reference";
    4. when you call by value, a copy is made, thus increasing memory.
    5. when you call by reference, a copy is not made, thus memory is not wasted as they are pointing to same memory location.
    6. another way to modify the argument is to pass the address of argument, rather than argument itself.
    7. when array sis passed to function, then it converts into pointer of that array.
*/
int arr[10]={1,2,3,4,5,6,7,8,9,11};
bool sum = evensum(arr,10);
if(sum)
    cout<<"Even sum";
else
    cout<<"odd sum";
cout<<endl;
for(int i =0 ;i<10; i++)
    cout<<arr[i]<<" ";
cout<<endl;
int cat = 0;
int dog = 5;
f(cat, dog);
cout<<cat<<endl<<dog<<endl;
}
