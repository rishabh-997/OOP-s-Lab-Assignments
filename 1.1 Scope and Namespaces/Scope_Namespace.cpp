#include<bits/stdc++.h>
using namespace std;

const int Cat = 1; //global pussy


namespace partyAnimals{
        int CAT;
        string DOG = "bow wow";
    }
using namespace partyAnimals;

int main(){

/**
--------------------------------------------NAMED CONSTANTS-----------------------------------------------------------------------

    It is hard to avoid name conflicts in large program.
    c++ has number of mechanisms that aid in providing names and limiting scope;
**/

const double PI = 3.14;
const int cutoff[] = {60,70,80,90};
const int days = 7;
const int hours = 24*days;
int counter [hours];
/**
days = 10;
gives error message as assignment of read only variable

we can also define constant data types
**/
typedef char* Buffer;
typedef double Coordinates;
Coordinates x, y;
/**
    it is convention to start these variable names with capital letters.
    in order to change datatype of all coordinates defined from double to int , we can easily change it at one go...
    "GOOD SYSTEM ARCHITECTURE TECHNIQUE"

*/


/**
--------------------------------------------SCOPE-----------------------------------------------------------------------

When a group of c++ statements is enclosed in curly braces, they define a scope.
Variables and types that are declared within a block are accessible within a block are only accessible from within a block.
They are said to be local to the block\
Variable declared outside the block is GLOBAL and accessible from everywhere in program.
The portion of program where given variable is accessible is called its scope.
*/
{
    const int Cat = 2; //local pussy
    cout<<Cat<<endl; //Ans is 2
}
const int Dog = Cat;
cout<<Dog<<endl;//ans is 1


/**
--------------------------------------------NAMESPACE-----------------------------------------------------------------------

    It is a mechanism that allows a group of related names to be define in one place.
    This helps organize global objects in natural groups.
    if we are constantly using variables from the same namespace, it is possible to avoid entering namespace specifiers by using keyword "using namespace name".
**/
cout<<DOG;

}
