#include<iostream>
#include<string>
using namespace std;
int main()
{
        // ARRAYS     -     C++ does not provide built-in run time checking for array subscripting out of bounds.
        //Pointers and arrays --  C++ inherits from the C language. THe name of the array is a pointer to the arrays' initial element and vice versa.

        char c[]={'c','a','t'};
        char *p=c;
        char* q=&c[0];
        cout<< c[2]<<" " <<p[2] <<" " <<q[2];

        //STRINGS
        // C style string "Hello World"

        // IN c++ we use STL strings for wide range of operations and functionality by including #include<string> header file.
        // Any value that a variable can hold is called a LITERAL in C++.
        //We can directly compare 2 strings in lexicographical order in c++

        string s="vasu";
        string t="sehgal";
        cout<<endl;
        if(s>t)
            cout<<"yes";
        else
            cout<<"no";



/*    ooooooooooooooooo
      |   ...   ...   |
    (.|   x       x   |.)
      |   *   |   *   |
      |   *_______*   |
      |               |
      |_______________|
*/
}
