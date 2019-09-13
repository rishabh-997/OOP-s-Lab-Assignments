#include<bits/stdc++.h>
using namespace std;

struct passenger{
    string name,meal;
};

int main(){
    /**
    ----------------------STANDARD TEMPLATE LIBRARY-----------------------------
	1. The STL is a collection of useful classes for common data structures, e.g. class string
	2. stack, queue, vector, list, set, map

	--------------------------STL vector class---------------------------------
	1. One of the important features of STL is that each object of vector class can store objects of any one type
	2. #include <vector>
	3. vector <int> score(100); //scores is a vector containing 100 int types
	4. a class whose definition depends on user defined type, is called templates.

	----------------------------VECTOR----------------------------
	1. individual elements of vector object can be indexed using usual index operator.
	2. they can also be accessed by the 'add' member functions.
	3. the advantage of latter is that it performs range checking and generate an error exception if index s out of bounds.
    4. A vector object size is given by size() member functions.
    5.

	*/
	vector<int> score(100);
	score[105] = 105;
	cout<<score[105]<<endl; // no error
	vector<passenger> vect(10);
	score.resize(score.size()+10); // badha dees

	string s = "a dog";
    s += " is a dog";
    cout<<s<<endl;
    cout << s.find("dog")<<endl;
    cout << s.find("dog", 3)<<endl;
    if (s.find("doug") == string::npos) {
        cout<<"not found"<<endl;
    }
    cout << s.substr(7, 5)<<endl;
    s.replace(2, 3, "frog");// replace three characters from index 2
    cout<<s<<endl;
    s.erase(6, 3);//erases three characters from index 6;
    cout<<s<<endl;
    s.insert(0, "is "); //inserts string at given position;
    cout<<s<<endl;

    /**
        lexicographical comparison
        currently , s = is a frog a dog;
    */
    if (s == "is a frog a dog") {
        //true
    }
    if (s < "is a frog a toad") {
        //true
    }
    if (s < "is a frog a cat") {
        //false
    }
}
