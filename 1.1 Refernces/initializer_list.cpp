#include<bits/stdc++.h>
using namespace std;

enum MealType {
    no_pref, regular, low_fat, vegan
};

struct passenger {
        string name;
        MealType meal;
        bool isFreqFlyer;
        string freqFlyerNumber;
}p1 = {"Rishabh", regular, true, "10"};


class Passenger {
private:
    string name;
    MealType meal;
    bool isFreqFlyer;
    string freqFlyerNumber;
public:
    Passenger(){
        name = "Rishabh";
        meal = regular;
        isFreqFlyer = true;
        freqFlyerNumber = "50";
    }
    //const means we are passing by reference so we don't want value to be changed
    // we can also assign values to constructors in this way which is called initializer list
    Passenger(const string & m_name,const MealType & m_meal) : name(m_name), meal(m_meal), isFreqFlyer(true), freqFlyerNumber("250") {}


    //copy constructor
    Passenger(const Passenger & pass){
        name = pass.name;
        meal = pass.meal;
        isFreqFlyer = pass.isFreqFlyer;
        freqFlyerNumber = pass.freqFlyerNumber;
    }
    void show(){
        cout<<name<<endl<<meal<<endl<<isFreqFlyer<<endl<<freqFlyerNumber<<endl;
    }
};

class Vect {
public :
    int size;
    int *data;
    Vect(int n = 10){
        size = n ;
        data = new int[n];
    }
    /*Vect(const Vect & a){
        size = a.size;
        data = new int[size];
        for(int i=0;i<size;i++){
            data[i] = a.data[i];
        }
    }*/

    Vect& operator = (const Vect& a){
        if(this != &a){
            delete[] data;
            size = a.size;
            data = new int[size];
        }
    }

    ~Vect()
    {
        delete [] data;
    }
    void show(){
        cout<<size<<endl;
    }
    void set_data(int dat){
        *(data+dat) = dat;
    }
    void show_data(){
        for(int i=1;i<=6;i++){
            cout<<*(data+i)<<endl;
        }
    }

};

int main(){
/**
-----------------------------Initializer List-----------------------------------------
*/

Passenger p1; //default constructor
Passenger p2("John", regular);
p2.show();

/**
-----------------------------Destructor-----------------------------------------

    1. if a class object comes into existence dynamically, destructor will be called when object will be destroyed using delete operator
    2. If class object comes into existence because it is a local variable, the destructor will be called when function returns.
    3. Since we provided no copy constructor, the system uses its default which simply copies each member of a to b;
    4. The problem arose because we allocate memory and we use system's default copy constructor and assignment operator.
    5. If class allocates memory, you should provide copy constructor and assignment operator to allocate new memory for making copies.
    *6. We can assign memory to class either by calling copy constructor or by using operator overloading....
*/
Vect a(10);
Vect b = a;
a.show();
b.show();
//we will overload a operator....
Vect c;
c = a;
c.show();

c.set_data(1);
c.set_data(2);
c.set_data(3);
c.set_data(4);
c.set_data(5);
c.set_data(6);
c.show_data();


/**
-----------------------------Class Memory Allocation-----------------------------------------

    1. For any instance of class object, "this" is defined to be this instance of currently calling object.
    2. Every class that allocates its own object using "new" should :
        a. define a destructor to free any allocated objects.
        b. define a copy constructor, which allocates its own new member, storage and copies the contents of member variables.
        c. define an assignment operator which deallocates new storage and copies all member variables.

*/




}
