// 2)	Create a base class Animal. Declare pure virtual function “void makeSound()” in it. 			
// Define following sub classes for this class.                                                 		A) Dog  b) Cat  c) Tiger	
// “Tiger” class will have one more function “hunting()”.                                         	 create a global function “void perform() which accepts pointer of type Animal so that it can invoke “makeSound()” function polymorphically. Inside this function find out where exactly where “Tiger” is stored using  RTTI (dynamic_cast) , and invoke “hunting()” function along with “makeSound()” function.

#include<iostream>
using namespace std;

class Animal{
    public:
        virtual void makesound()=0;
};
class Dog:public Animal{
     public:
    virtual void makesound(){
        cout<<"Dog Barking...."<<endl;
    }
};
class Cat:public Animal{
     public:
    virtual void makesound(){
        cout<<"Cat Meowing...."<<endl;
    }
};
class Tiger: public Animal{
    public:
        virtual void makesound(){
            cout<<"Tiger Roaring...."<<endl;
        }
        void hunting(){ //additional method in tiger class
            cout<<"Tiger Hunting Deer...."<<endl;
        }
};

void perform(Animal *ptr){ //method with parent pointer accepting child classes addresses
    ptr->makesound(); //invoking makesound method of each class
    Tiger *t=dynamic_cast<Tiger*>(ptr); //downcasting weapon pointer to tiger if weapon pointer is pointing to object of tiger
    if(t)
        t->hunting(); //invoking hunting method of tiger class;
}
int main(){
    perform(new Dog);
    perform(new Cat);
    perform(new Tiger);
    return 0;
}