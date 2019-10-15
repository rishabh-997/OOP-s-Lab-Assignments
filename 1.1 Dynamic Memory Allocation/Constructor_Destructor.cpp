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
    Passenger(const string & m_name,const MealType & m_meal){
        name = m_name;
        meal = m_meal;
    }
    //copy constructor
    Passenger(const Passenger & pass){
        name = pass.name;
        meal = pass.meal;
        isFreqFlyer = pass.isFreqFlyer;
        freqFlyerNumber = pass.freqFlyerNumber;
    }
};

int main(){
/**
-----------------------------Constructors Destructor-----------------------------------------
    1. an important aspect of classes is to initialize classes member data;
    2. A constructor is imp member function whose task is to perform such initialization
    3. It is invoked when a new class object comes into existence.
    4. There is an analogous destructor function that is called when a class goes out of existence
    5. Constructor function name is same as class name. It has no return type
    6. The copy constructor is a constructor which creates an object by initializing it with an object of the same class, which has been created previously.
*/

Passenger p1; //default constructor
Passenger p2("John", regular); //second constructor
Passenger p3(p2); //copy constructor
Passenger p4 = p2; //copy constructor
Passenger* p5 = new Passenger(); //default constructor
Passenger* p6 = new Passenger("John", regular); //second constructor

}
