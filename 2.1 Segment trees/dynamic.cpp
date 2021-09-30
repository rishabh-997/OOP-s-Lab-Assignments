#include <bits/stdc++.h>
using namespace std;

int main(){
/** Pointers, Dynamic memory, the 'new' operator
    We often find it useful to object as the need arises
    The c++ system reserves large block of memory called the 'free store'
    The operator ''new'' dynamically allocates the correct amount of storage for an object from the free store and returns a pointer to it
    The value of this pointer is the address where the object resides in the memory
    The operator "delete" should only be applied to objects that have been allocated through new;
**/

/**
 unlike java, c++ does not provide automatic garbage collection, therefore you must delete yourself.
 Arrays can also be allocated through new;
**/
enum MealType {
    no_pref, regular, low_fat, vegan
};
struct Passenger {
    string name;
    MealType meal;
    bool isFreqFlyer;
    string freqFlyerNumber;
};
Passenger *pointer;
pointer = new Passenger; // pointer points to the new passenger
pointer -> name = "john"; // -> is used to access pointers to structures
pointer -> isFreqFlyer = true;
pointer -> freqFlyerNumber = '007';
pointer -> meal = vegan;
cout<<"name = "<<pointer -> name<<"\n";
cout<<"meal = "<<pointer -> meal<<"\n";
cout<<"is frequent flier = "<<pointer -> isFreqFlyer<<"\n";
cout<<"flier number = "<<pointer -> freqFlyerNumber<<"\n";

delete p;
//array using new
char* buffer = new char[100];
buffer[3] = 'a';
delete []buffer;

/**
 Memory Leak :
    -Memory leak occurs when programmers create a memory in heap and forget to delete it.
    -Memory leaks are particularly serious issues for programs like daemons and servers which by definition never terminate.

    -if object is allocated through new it should be eventually deleted with delete.
    -if you are writing big program and you do not delete memory then you will run out of memory.

**/

return 0;
}
