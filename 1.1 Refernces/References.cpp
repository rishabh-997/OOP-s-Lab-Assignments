#include <bits/stdc++.h>
using namespace std;

int main(){
/**
 REFERENCES :
    -a reference is simply an alternative name for an object.
    -unlike pointers, which can be NULL, a reference in c++ cannot be nULL
    -moreover,  when a reference is declared, its value must be initialized
    -afterwards any access to the reference is treated exactly as if it is underline of objects
    -references are most often used for passing objects in functions and returning results.
**/

string author = "PANDA";
string& penName = author; //pen_name is alias for author
cout<<author<<endl<<penName<<endl; //Panda Panda is output
author = "Sreyans";
cout<<author<<endl<<penName<<endl; //Sreyans Sreyans is output
penName = "Ridhish";
cout<<author<<endl<<penName<<endl; //Ridhish Ridhish is output
}
