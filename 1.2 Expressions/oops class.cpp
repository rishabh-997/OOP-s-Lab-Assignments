#include<iostream>
using namespace std;
int  main()
{

    //SIZE OF VARIOUS DATA TYPES
   {
    cout<<"int "<<sizeof(int)<<endl;
    cout<<"char "<<sizeof(char)<<endl;
    cout<<"short "<<sizeof(short)<<endl;
    cout<<"long "<<sizeof(long)<<endl;
    cout<<"float "<<sizeof(float)<<endl;
    cout<<"double "<<sizeof(double)<<endl;

   }



        //ENUMERATIONS - Defining datatypes. Here Day and Mood are the new datatypes which can hold values of the elements stored inside it.
       // By default values from 0 are assigned to the elements inside.
   {
       enum Day{MON,TUE,WED,THU,FRI,SAT,SUN};
       enum Mood{HAPPY=3,SAD=1,ANXIOUS=4,SLEEPY=2};

        Day today=SUN;

        cout<<endl<<today<<endl;
   }

   //Floating points are of 2 types : float and double
   {
       float myfloat=1;
       double mydouble=3.3333;
   }


   // Cpp is a strongly typed language. Before using a variable we need to define/declare it. In dynamic languages it is the opposite.


   /*Pointers, ARRAYS, STRUCTURES
   Each program variable is stored in the computer's memory at some location  or address.
   A pointer is variable that holds the value of such an address.
   Address of operator &
   Dereferencing operator *
   */
   {
       char ch='q';
       char *p=&ch; //p holds the address of ch
       cout<<"value of ch ="<<ch<<endl<<"address of ch ="<<p<<endl;
       ch='z';
       cout<<"new value of ch ="<<ch<<endl<<"address of ch ="<<p<<endl;
        *p='x';
        cout<<"value of ch (updated with the help of pointer)="<<ch<<endl<<"address of ch ="<<p<<endl;

        //NULL POINTER
        char* myNullp=NULL;
        cout<<"Address of NULL pointer "<<myNullp<<endl;//<< "Address of NULL pointer"<<myNullp<<endl;
        void* myvoidp;
        cout<<"Address of void pointer "<<myvoidp<<endl;//<< "Address of NULL pointer"<<myNullp<<endl;
   }

    /*Arrays
    An array is a collection of elements of the same type.
    Given any type T and a constant N, a variable T[N] holds an array of N elements, each of type T
    Each array element is referenced by its index.
    */
    {



    }


}
