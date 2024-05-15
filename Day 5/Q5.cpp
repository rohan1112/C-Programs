// 5) create a class Base with "int num1" ,parameterized constructor and destructor. Derive class Sub1 from Base with "int num2" ,parameterized constructor and destructor. Now derive class Sub2 from Sub1 with "int num3" ,parameterized constructor and destructor.
// in the main function create the object of Sub1 and notice constructor and destructor invocation.

#include<iostream>
using namespace std;

class Base{
    int num1;
    public:
        Base(int k){
            this->num1=k;
            cout<<"In params contructor of class Base"<<endl;
        }
        ~Base(){
            cout<<"In params destructor of class Base"<<endl;
        }
};
class Sub1:public Base{
    int num2;
    public:
        Sub1(int k):Base(0){
            this->num2=k;
            cout<<"In params contructor of class Sub1"<<endl;
        }
        ~Sub1(){
            cout<<"In params destructor of class Sub1"<<endl;
        }
};
class Sub2:public Sub1{
    int num3;
    public:
        Sub2(int k):Sub1(1){
            this->num3=k;
            cout<<"In params contructor of class Sub2"<<endl;
        }
        ~Sub2(){
            cout<<"In params destructor of class Sub2"<<endl;
        }   
};

int main(){
    Sub1(10); //constructor invocation: Base->Sub1. Destructor invocation(reverse): Sub1->Base;
    Sub2(50); ; //constructor invocation: Base->Sub1->Sub2. Destructor invocation(reverse): Sub2->Sub1->Base;
    return 0;
}