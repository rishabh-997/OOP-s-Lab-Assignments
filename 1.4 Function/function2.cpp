/**
-----------------------------------Functions OverLoading----------------------------
*/
#include<bits/stdc++.h>
using namespace std;

struct Passenger {
    string name;
    string meal;
};

void print(int x){
    cout<<x<<endl;
}
void print(const Passenger& bus){
    cout<<bus.name<<endl;
    cout<<bus.meal<<endl;
}

bool operator == (const Passenger &p1 , const Passenger &p2){
    if(p1.name==p2.name && p1.meal==p2.meal)
        return true;
    return false;
}

int main(){

/**

*/
Passenger p1 = {"rishabh","vegie"};
Passenger p2 = {"rishabh","vegie"};
print(10);
print(p1);
print(p2);
/**
-----------------------------------Operator OverLoading----------------------------
*/
bool result = p1==p2;
if(result)
    cout<<"Same che";
else
    cout<<"Alag che";

}
