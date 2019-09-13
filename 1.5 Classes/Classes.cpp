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
}p1 = {"Rishabh", regular, true, "10"};
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
    ------------------------------Classes 2----------------------
*/
class Passenger {
private:
    string name;
    MealType meal;
    bool isFreqFlyer;
    string freqFlyerNumber;
public:
    Passenger();
    void getData(){
        cout<<name<<"  "<<meal<<"  "<<freqFlyerNumber;
    }
    bool isFrequentFlyer() const{
        return isFreqFlyer;
    };
    void makeFreqFlyer(const string & newFreqNo){
        isFreqFlyer = true;
        freqFlyerNumber = newFreqNo;
    }
// the const indicates the member function isFreqFlyer() is member accessor.
};
//constructor
Passenger::Passenger(){
    name = p1.name;
    meal = p1.meal;
    isFreqFlyer = p1.isFreqFlyer;
    freqFlyerNumber = p1.freqFlyerNumber;
};

int main(){
/**
    ------------------------------------Classes---------------------------------
    1. the concept of class is fundamental to cpp, since it provides a way to define a new user defined data type;
    2. completely associated functions and operators.
    3. by restricting access to certain class members, it is possible to separate our properties that are essential for classes details that are to be implemented
    4. they are fundamental concepts that  uses OOP approach, which is a programming paradigm
    5. constructor function is to initialize the value of classes member variables.
    6. there is no required order between private and public sections and in fact, it is possible to switch back and forth
    7. Member functions can be defined inside or outside the class body;
    8. when we are within body of member function, the member variables are given reference to particular object;
    9. when member function is defined in the class, then it is compiled inline.
    10. when member functions are defined within class, it is declared inline
*/
//created an instance of Counter class
    Counter c1;
    c1.increase(100);
    c1.getCounter();

    Passenger pass;
    if(pass.isFrequentFlyer())
        pass.makeFreqFlyer("123");
    pass.getData();
}
