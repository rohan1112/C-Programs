
// 3)create a class "MyClass1"
// with members and member function "disp1().
// create another class "MyClass2"
// with members and member function "disp2().
// now try to invoke disp1() from disp2()
// in the main() function, create instances of both the classes and invoke their member functions.

#include<iostream>
using namespace std;

class MyClass1{
    int num;
public:
    void disp1(){
        cout<<"In disp1"<<endl;
    }
};
class MyClass2{
    int num;
public:
    void disp2(MyClass1 &ref){
        cout<<"In disp2 calling disp1"<<endl;
        ref.disp1();
    }
    //The below function will always create a new object when it gets invoked so its a overhead
    // void disp2(){
    //     cout<<"In disp2 calling disp1"<<endl;
    //     MyClass1 m;
    //     m.disp1();
    // }
};
int main(){
    MyClass1 m1;
    MyClass2 m2;
    m1.disp1();
    m2.disp2(m1);
    return 0;
}