#include<bits/stdc++.h>
using namespace std;

/**
-----------------------------Class Friends and Class Members-----------------------------------------

    1. Complex data structures typically involves the interaction of many classes.
    2. in such cases, there are often issues in coordinating the actions of these classes to allow sharing of these information.
    3. we can declare a function as friend, this means this member can access the classes of private data.
    4. another time when it is appropriate to use friends is when two different classes are closely related.
*/

class someclass{
private:
    int secret;
public:
    friend ostream& operator << (ostream& out, const someclass & x){
        cout<<x.secret<<endl;
    }
};

class Vector{
private:
    double cordi[3];
    friend class Matrix;
public:

};

class Matrix{
private:
    double arr[3][3];
public:
    Vector multiply (const Vector& v){
    }
};

Vector Matrix::multiply (const Vector & v){
    Vector w;
    for(int i=0;i<3;i++){
        w.cordi[i] = 0;
        for(int j =0; j<3 ;j++)
            w.cordi[i] += arr[i][j] * v.cordi[j];
    }
}

int main(){
    someclass a;
}
