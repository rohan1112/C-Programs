// 4)
// Create a base class “Subject”.Declare pure virtual function “void maxmarks()” in it.  Define following sub classes for this class. A) Maths b) History c) English.	Define “maxmarks” in these classes.

// now write a global function "show" which will accept "subject class reference" as an argument. this function should be able to call "maxmarks()" of any child class which is passed.
// From main function try to call this function by passing various child classes.


#include<iostream>
using namespace std;

class Subject{
    public:
        virtual void maxmarks()=0;
};
class Maths:public Subject{
    void maxmarks(){
        cout<<"Max marks of Math is 85"<<endl;
    }
};
class History:public Subject{
    void maxmarks(){
            cout<<"Max marks of History is 78"<<endl;
    }
};
class English:public Subject{
    void maxmarks(){
            cout<<"Max marks of English is 82"<<endl;
    }
};

//Global function with argument of parent class reference i.e accepting any child classes
void show(Subject &ref){
    ref.maxmarks(); //calling maxmarks() for each class passed from main method;
}
int main(){
    Maths m;
    History h;
    English e;
    show(m);
    show(h);
    show(e);
    return 0;
}