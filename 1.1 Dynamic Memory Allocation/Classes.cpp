#include <bits/stdc++.h>
using namespace std;

enum MealType {
    no_pref, regular, low_fat, vegan
};

struct passenger {
        string name;
        MealType meal;
        bool isFreqFlyer;
        string freqFlyerNumber;
}p1 = {"Vasu", regular, true, "10"};
/**
    ------------------------------Classes 1----------------------
*/
class Counter{
private:
    int count;
public:
    Counter();
    int getCounter()
    {
        cout<<count<<endl;
    }
    void increase(int x){
    count += x;
    }
};

//kind of constructor
Counter::Counter(){     //scope resolution operator
count = 0;
};
/**
    -----------------------Classes 2----------------------
*/
class Passenger {
private:
    string name;
    MealType meal;
    bool isFreqFlyer;
    string freqFlyerNumber;
public:
    Passenger();    //default constructor
    Passenger(const string& nm, MealType mp, const string& ffn);     //parametrized constructor , default arguements passed in the end.
    Passenger(const Passenger& pass);   //copy constructor
    void getData(){
        cout<<name<<"  "<<meal<<"  "<<freqFlyerNumber;
    }
    bool isFrequentFlyer() const;
    void makeFreqFlyer(const string& newFreqNo){
        isFreqFlyer = true;
        freqFlyerNumber = newFreqNo;
    }
// the const indicates the member function isFreqFlyer() is member accessor.
};
//constructor
Passenger::Passenger(){     //default constructor
    name = "No Name";
    meal = no_pref;
    isFreqFlyer = false;
    freqFlyerNumber = "NONE";
}
Passenger::Passenger(const string& nm, MealType mp, const string& ffn="NONE"){      //parametrized constructor
    name = nm;
    meal = mp;
    isFreqFlyer = false;
    if(ffn!="NONE")
    freqFlyerNumber = "NONE";
}
Passenger::Passenger(const Passenger& pass){     //copy constructor
    name = pass.name;
    meal = pass.meal;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNumber = pass.freqFlyerNumber;
}


/*
------------Initializer Lists--------------
It is used to avoid the usage of assignment operator

Passenger :: Passenger(const string& nm, MealType mp, string ffn)
:name(nm), mealPref(mp), isFreqFlyer(ffn!=NONE)
{
    freqFlyerNumber=ffn
}
*/
int main(){
/**
    ------------------------------Classes----------------------
    1. the concept of class is fundamental to cpp, since it provides a way to define a new user defined data type;
    2. completely associated functions and operators.
    3. by restricting access to certain class members, it is possible to separate our properties that are essential for classes details that are to be implemented
    4. they are fundamental concepts that  uses OOP approach, which is a programming paradigm
    5. constructor function is to initialize the value of classes member variables.
    6. there is no required order between private and public sections and in fact, it is possible to switch back and forth
    7. Member functions can be defined inside or outside the class body;
    8. when we are within body of member function, the member variables are given reference to particular object;

*/
//created an instance of Counter class
Counter c1;
c1.increase(100);
c1.getCounter();

Passenger pass;
pass.getData();

/*When we are within the body of a member function, the member variables are given without reference to a particular object
*/ //Passenger pass;
   //if(!pass.isFreqFlyer)
     // pass.makeFreqFlyer("392953");
   //pass.name="Joe Blow";

//When a member function is defined within a class it is compiled inline.

//----------------------Constructors and Destructors----------------------//
/*  An important aspect of classes is the capability to initialise a class' member data.
    A constructor is a special member function whose task is to perform such an initialisation.
    It is envoked when a new class object comes into existence.
    There is an analogous destructor function that is called when a class goes out of existence.
    A constructor member function name is same as the class, And it has no return type.
    Constructor and Destructor functions are defined in public access specifier.

*/

//Let us define passenger objects
Passenger p1;       //default constructor
Passenger p2("John",vegan,"292392");     //parametrized constructor
Passenger p3("BHaskar",regular);
Passenger p4(p3);      //copy constructor
Passenger p5=p2;        //it will set all the data members of p5 equal to p2
Passenger* pp1= new Passenger;      //default constructor
Passenger* pp2= new Passenger("Joe Blow",no_pref);      //parametrized constructor

delete pp1;
delete pp2;












}




