// 6)	Create a base class “Subject”.Declare pure virtual function “void maxmarks()” in it.  Define following sub classes for this class. A) Maths b) History c) English.	Define “maxmarks” in these classes. In main function, create array of pointer to Subject,  which will contain objects of these three sub classes. Using RTTI, find out where is “History” and call its maxmarks() method

#include<iostream>
using namespace std;

class Subject{
    public:
        virtual void maxmarks()=0;
};  

class Maths:public Subject{
     public:
    void maxmarks(){
        cout<<"Maximun mark for math is 88"<<endl;
    }
};
class History:public Subject{
    public:
        void maxmarks(){
            cout<<"Maximun mark for math is 92"<<endl;
        }
};
class English:public Subject{
     public:
        void maxmarks(){
            cout<<"Maximun mark for math is 85"<<endl;
        }
};
int main(){
     Subject *Subarr[]={new Maths,new History,new English};
    for(int i=0;i<3;i++){
        Maths *h=dynamic_cast<Maths*>(Subarr[i]);
        if(h){
            h->maxmarks();
        }
    }
 
    return 0;
}