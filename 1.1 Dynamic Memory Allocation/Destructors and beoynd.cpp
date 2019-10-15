#include<iostream>
using namespace std;
//------------Destructors-------------
class Vect{

    private:
        int *data;
        int size;

    public:
        Vect(int n);
        ~Vect();
        void setData(int pos, int val){
                data[pos]=val;
        }
        void getData(int pos){
            cout<< data[pos]<<endl;
        }

};
Vect::Vect(int n){
    size=n;
    data=new int[n];
}

Vect::~Vect(){
    delete [] data;
}


int main()
{
//-----Classes and Memory Allocation

Vect a(100);
Vect b=a;   // b.data=a.data, b.size=a.size
Vect c;
c=a;        // c.data=a.data, c.size=a.size
a.setData(0,234);

cout<<"For a";
a.getData(0);
cout<<"For a";
b.getData(0);
cout<<"For a";
c.getData(0);
}
