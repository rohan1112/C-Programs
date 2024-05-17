// 1)	Create a base class Weapon. Declare pure virtual function “void attack()” in it. 			
// Define following sub classes for this class.                                                 		A) Gun  b) Sword  c) Rifle		
// “Rifle” class will have one more function “Chambering ()”.               	create an array of pointer to Weapon having 3 elements.
// In this array , store  the instances of child classes.
// Traverse the array , find out where exactly “Rifle”  is stored using  RTTI (dynamic_cast) , and invoke “Chambering ()” function along with “attack()” function.

#include<iostream>
using namespace std;

class Weapon{
    public:
        virtual void attack()=0; //pure virtual function(abstract function);
};

class Gun:public Weapon{
     public:
     void attack(){
        cout<<"Shooting with gun"<<endl;;
    }
};
class Sword:public Weapon{
     public:
     void attack(){
        cout<<"King of Hell, Three-Sword Serpent attack" <<endl;;
    }
};
class Rifle:public Weapon{
    public:
        void attack(){
            cout<<"Patt se headshot!!!"<<endl;
        }
        void chambering(){
            cout<<"Chamber Reloading"<<endl;
        }
};
int main(){
    Weapon *warr[]={new Gun,new Sword,new Rifle}; //Array of pointers to weapon storing subclasses of weapon 
    for(int i=0;i<3;i++){  //traversing the array
        warr[i]->attack(); //invoking attack method of each subclass of weapon
        Rifle *r=dynamic_cast<Rifle*>(warr[i]); //Casting weapon pointer to rifle pointer if weapon pointer is pointing to rifle pointer
        if(r){
            r->chambering(); //invoking chambering method of rifle class;
        }
    }
    return 0;
}