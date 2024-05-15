// 4)Define three classes A, B, C carrying one integer member in each of them. Let C be derived from A and B. Write constructors and destructors in each of these classes that prompt some message from each class. Also the constructor of C should accept three values, one for its own member and other two for A and B. The C constructor should see that the two values goes to respective constructors of A and B. What is the order in which constructors and destructors get called upon? How can you change this order?

#include<iostream>
using namespace std;
class A{
    int a;
    public:
        A(int a){
            this->a=a;
            cout<<"In constructor of A with value "<<a<<endl;
        }
        ~A(){
            cout<<"In destructor of class A"<<endl;
        }
};
class B{
    int b;
    public:
        B(int b){
            this->b=b;
            cout<<"In constructor of B with value "<<b<<endl;
        }
        ~B(){
            cout<<"In destructor of class B"<<endl;

        }
};
class C:public B,public A{ 
    //This will change the inheritance order->first B class will get initialse then A class will get initialse and after that C class itself get initialse 
    //Destructor order will be in reverse C->A->B;
    int c;
    public:
        C(int a,int b,int c):A(a),B(b){ //Changing this will not change the inheritance order 
            this->c=c;
            cout<<"In constructor of C wiht value "<<c<<endl;
        }
        ~C(){
            cout<<"In destructor of class C"<<endl;

        }
};
int main(){
    C c(2,4,6);
    return 0;
}